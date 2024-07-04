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
### 练习 6.11
[程序6.11: reset](6.11.cpp)

输入/输出：
```
5
a = 5

7
a = 7
```
### 练习 6.12
[程序6.12: 引用参数交换](6.12.cpp)

输入/输出：
```
3 6
6 3
```
### 练习 6.13
`void f(T)`传递的是一个值，无论函数体内部发生什么都不会改变实参。`void f(T&)`传递的是引用，绑定到实参上，函数会对实参发生改变。
### 练习 6.14
当你需要通过函数修改实参的时候，应该用引用类型的例子。
```cpp
void reset(int &n){
    n = 33;
}
```
当实参不需要改变时，仅仅用到其的值的时候，形参不能是引用类型。
```cpp
void print(int key){
    for(int i = key; i >= 0; --i)
        cout << i << endl;
}
```
### 练习 6.15
1. 因为s串是不应该被函数修改的，常量引用确保不会通过函数去修改它。而occurs是要通过函数不断修改的，所以不能是常量引用。
2. s是一个字符串，其可能很长，值传递的拷贝可能导致开销过大，采用引用更佳；occurs要保存修改后的结果在函数体外，用引用；c仅仅用到了字符的值，而且可能只是个临时量，而字面量是不能用引用的。
3. s串可能在函数中被修改，导致结果不一样；occurs会只是一个固定的值，并没有统计，修改的时候还会报错。
### 练习 6.16
这个函数不能传递string常量，无法判断如字面量之类的情况。
```cpp
bool is_empty(const string &s) {
    return s.empty();
}
```
### 练习 6.17
[程序6.17: 判断大写与改小写](6.17.cpp)

不相同，第一个函数并不改动形参，使用const形参。第二个形参发生修改，不可以用const。

输入/输出：
```
jflkdajdf
不含有大写字母
jflkdajdf
```
### 练习 6.18
(a) 比较两个matrix类对象的大小
```cpp
bool compare(matrix &x, matrix &y);
```
(b) 更改vector指定位置的值
```cpp
vector<int>::iterator change_val(int key, vector<int>::iterator &it);
```
### 练习 6.19
```cpp
(a) calc(23.4, 55.1);       //不合法，形参数量不匹配
(b) count("abcda", 'a');    //合法
(c) calc(66);               //合法，66的值强制转换为double
(d) sum(vec.begin(), vec.end(), 3.8);    //合法，3.8强制转换3
```
### 练习 6.20
当引用形参在函数体内不会改变时应该是常量引用。

常量引用设为了普通引用，则这个参数不能传递常量，效果大打折扣。此外在函数嵌套中会出现难以察觉的错误。
### 练习 6.21
[程序6.21: 返回较大值](6.21.cpp)

输入/输出：
```
2 6
6
```
### 练习 6.22
[程序6.22: 交换指针](6.22.cpp)

输入：
```
54 856
```
输出：
```
54 856
856 54
```
### 练习 6.23
[程序6.23: 输出函数](6.23.cpp)

输出：
```
0
0 1
```
### 练习 6.24
数组大小对函数调用没有影响，依然可以传入2个元素的数组和20个元素的数组，并不会报错，但数组元素过少访问时候越界就会报错了。

该等价于`void print(const int* ia)`， 如果真想只对大小为10的数组操作，那么建议使用数组引用实参。注意括号的问题。
```cpp
void print(const int (&ia)[10])
{
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}
```
### 练习 6.25
[程序6.25: 连接main的实参并输出](6.25.cpp)

输入：在vs中项目属性-调试-命令行处传参数
```
fds qw dfjla lgajop
```
输出：
```
argc = 5
E:\CppProject\Project6\Debug\Project6.exe
E:\CppProject\Project6\Debug\Project6.exe
fds
qw
dfjla
lgajop
str = fdsqwdfjlalgajop
```
### 练习 6.26
程序可以用上一题的：[程序6.25: 连接main的实参并输出](6.25.cpp)

将输入改为：
```
-d -o ofile data0
```
### 练习 6.27
[程序6.27: 不定量数的和](6.27.cpp)

输出：
```
1179
```
### 练习 6.28
elem是`const string&`
### 练习 6.29
与string类型相似，如果有过于冗长的可能，则选择引用会更好；若只是如int，char之类的，拷贝的影响很小。
