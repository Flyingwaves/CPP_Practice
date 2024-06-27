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
[程序5.24: 修改、抛出异常](5.24.cpp)
