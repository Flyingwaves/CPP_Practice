#pragma once
#ifndef __SCREEN__
#define __SCREEN__

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Screen;   //����

//��������ʾ��Ļ�����ж������
class Window_mgr {
public:
    using ScreenIndex = vector<Screen>::size_type;
    void clear(ScreenIndex);

private:
    vector<Screen> screens{ Screen(24, 80, ' ') };  //Ĭ�ϴ���һ������
};


//����
class Screen {
    friend void Window_mgr::clear(ScreenIndex);
public:
    typedef string::size_type pos;

    Screen() = default;
    Screen(pos h, pos w) : height(h), width(w), contents(h* w, ' ') { }
    Screen(pos h, pos w, char c)
        : height(h), width(w), contents(h* w, c) { }   //��ʼ��������������c

    //���Ŀ���ַ�
    char get() const { return contents[cursor]; }
    char get(pos row, pos col) const { return contents[row * width + col]; }    //ͨ�����У���λ��
    //�ƶ����
    Screen& move(pos r, pos c);
    //������ֵ
    Screen& set(char c);
    //��ӡ��������
    Screen& display(ostream& os) {
        do_display(os);
        return *this;
    }
    const Screen& display(ostream& os) const {
        do_display(os);
        return *this;
    }

private:
    pos cursor = 0;     //���λ�õ��±꣬��Ϊ��άƽ�����������һά�ַ������洢
    pos height = 0, width = 0;  //���ڵĴ�С�������
    string contents;    //���ڵ�����

    void do_display(ostream& os) const {
        os << contents;
    }
};

inline
Screen& Screen::move(pos r, pos c) {
    cursor = r * width + c;
    return *this;
}

inline
Screen& Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline
void Window_mgr::clear(ScreenIndex i) {     //��Ϊ��������Ԫ�����Կ��Է���s��˽�г�Ա
    Screen& s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}
#endif // !__SCREEN__
