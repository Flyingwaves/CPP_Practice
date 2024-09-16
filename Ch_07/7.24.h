#pragma once
#ifndef __SCREEN__
#define __SCREEN__

#include <iostream>
#include <string>

using namespace std;

class Screen {
public:
    typedef string::size_type pos;

    Screen() = default;
    Screen(pos h, pos w) : height(h), width(w), contents(h* w, ' ') { }
    Screen(pos h, pos w, char c)
        : height(h), width(w), contents(h* w, c) { }   //��ʼ��������������c

    char get() const { return contents[cursor]; }
    char get(pos row, pos col) const { return contents[row * width + col]; }    //ͨ�����У���λ��

private:
    pos cursor = 0;     //���λ�õ��±꣬��Ϊ��άƽ�����������һά�ַ������洢
    pos height = 0, width = 0;  //���ڵĴ�С�������
    string contents;    //���ڵ�����

};
#endif // !__SCREEN__
