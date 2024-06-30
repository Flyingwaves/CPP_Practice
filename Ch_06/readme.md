### 练习 6.1
实参是定义在被调函数体外的对象；而形参定义在函数体内，由实参进行初始化，可以看作是实参的副本，其作用域在函数内，函数调用结束后形参会销毁。
### 练习 6.2
(a) 函数类型和返回值的类型不同
```cpp
string f() {
    string s;
    //...
    return s;
}
```
(b) 没有注明函数类型
```cpp
void f2(int i) { /*...*/ }
```
(c) 两个形参名字相同，起码是一个作用域内， 还少了个括号
```cpp
int calc(int v1, int v2) { /*...*/ }
```
(d) 函数体没有括号
```cpp
double square(double x) {
    return x * x;
}
```
### 练习 6.3
```cpp
#include <iostream>

using namespace std;

int fact(int x) {    //偶数翻倍，奇数不变
    if (x % 2 == 0)
        return 2 * x;
    
    return x;
}
int main()
{
    int b = fact(5);
    int c = fact(4);

    cout << b << " " << c;
    return 0;
}
```
### 练习 6.4
```cpp
#include <iostream>

using namespace std;

int fac(int x) {    //x不宜过大，递归方式会爆掉
    if (x == 1)  return 1;
    return x * fac(x - 1);
}
int main()
{
    int ans = fac(5);
    cout << ans;
    
    return 0;
}
```
### 练习 6.5
```cpp
int abs(int n) {
    if (n < 0)   return -n;
    else
    {
        return n;
    }
}
```
### 练习 6.6
形参：定义在函数参数列表的局部变量

局部变量：形参以及定义在函数体内部的变量

局部静态变量：程序执行路径第一次经过定义语句时初始化，直至程序终止才销毁，函数结束不会对其产生影响。
### 练习 6.7
[程序6.7: 统计调用次数](6.7.cpp)

输出：
```
0 1 2 3 4 5 6 7 8 9
```
### 练习 6.8
[程序6.8: 头文件](Ch_06/Chapter6.h)
### 练习 6.9
[6.9_1: fact.cc](fact.cc)

[6.9_2: factMain.cc](factMain.cc)
### 练习 6.10
[程序6.10: 指针法交换](6.10.cpp)

输入：
```
5 7
```
输出：
```
7 5
```
