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
        : height(h), width(w), contents(h* w, c) { }   //初始生成生成满屏的c
    
    //输出目标字符
    char get() const { return contents[cursor]; }
    char get(pos row, pos col) const { return contents[row * width + col]; }    //通过行列，找位置
    //移动光标
    Screen& move(pos r, pos c);
    //设置新值
    Screen& set(char c);
    //打印窗口内容
    Screen& display(ostream& os) {
        do_display(os);
        return *this;
    }
    const Screen& display(ostream& os) const {
        do_display(os);
        return *this;
    }

private:
    pos cursor = 0;     //光标位置的下标，因为二维平面的内容用了一维字符串来存储
    pos height = 0, width = 0;  //窗口的大小，高与宽
    string contents;    //窗口的内容

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
#endif // !__SCREEN__
