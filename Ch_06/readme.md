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
### 练习 6.30
```
 error C2561: “str_subrange”: 函数必须返回值
```
### 练习 6.31
返回局部变量的引用或者局部临时量的引用是无效的，因为函数调用后其存储空间会释放掉。若想引用有效，其引用的一定是函数调用之前就存在的对象
### 练习 6.32
合法。函数的功能是返回数组的固定位置，程序的功能是将数组赋值，值为对应下标。
### 练习 6.33
[程序6.33: 递归输出vector](6.33.cpp)

输入：
```
3 63 7 54 87 432
^Z
```
输出：
```
3 63 7 54 87 432
```
### 练习 6.34
如果val为正数，则val递归中逐步减到0，正常退出；如果val为负数，则该递归会无限循环下去，直至栈空间耗尽为止
```cpp
int factorial(int val)
{
    if (val != 0)
        return factorial(val - 1) * val;
    return 1;
}
```
### 练习 6.35
`val--`传递的是val减1之前的值，这样将会一直调用`factorial(val)`，造成递归循环。

而且，对于`factorial(val--) * val`表达式，读取val和递减同时存在，造成未定义的问题。面对不同编译器，后面的val值可能不同。
### 练习 6.36
```cpp
string (&func())[10];
```
### 练习 6.37
```cpp
//类型别名
using strT = string[10];
strT& func();

//尾置类型
auto func1() -> string(&)[10];

//decltype
string ss[5] = { "as", "new", "key", "book", "six" };
decltype(ss) &func2();
```
函数不能返回数组，一定要返回指向其的指针或者引用
```
 error C2090: 函数返回数组
```
### 练习 6.38
```cpp
int odd[] = { 1,3,5,7,9 };
int even[] = { 2,4,6,8,10 };
decltype(odd)& arrPtr(int i) {
    return (i % 2) ? odd : even;
}
```
### 练习 6.39
```
int calc(int, int);
int calc(const int, const int);    //重复定义，合法

int get();
double get();    //非法，和上一个函数形参相同、名字相同，但返回类型不同

int *reset(int *);
double *reset(double *);    //重载函数，新的参数类型与返回类型，合法。
```
### 练习 6.40
(a) 没有问题

(b) 错误。被赋予默认值的形参后面所有的形参都必须有默认值。
### 练习 6.41
(a) 非法。第一个形参没有传递参数并且无默认值

(b) 合法。依次匹配。

(c) 合法。违背初衷，`'*'`想赋给`bckgrnd`但传给了`wd`
### 练习 6.42
[程序6.42: 输出单复数](6.42.cpp)

输出：
```
success
successes
failure
failures

```
### 练习 6.43
都放在头文件中，第一个是内联函数放头文件避免重复定义复杂化；第二个是函数声明一般也放在头文件中，不用再局部声明了
### 练习 6.44
```cpp
inline bool isShorter(const string& s1, const string& s2) {
    return s1.size() < s2.size();
}
```
### 练习 6.45 (有些疑问)
像6.17 6.21 6.22 6.23这样的函数不该是内联函数，因为它们流程不直接，调用次数少，难以直接展开；如6.42这种规模小，可以定义为内联函数。

当然递归函数也不该是内联函数。
### 练习 6.46
不可以。`s1.size() < s2.size()`不是常量表达式
### 练习 6.47
[程序6.47: 调试版改写6.33](6.47.cpp)

输入：
```
2 3 4 56 6 78 8 9 329 32
^Z
```
调试输出：
```
the vector size is 10
2
the vector size is 9
3
the vector size is 8
4
the vector size is 7
56
the vector size is 6
6
the vector size is 5
78
the vector size is 4
8
the vector size is 3
9
the vector size is 2
329
the vector size is 1
32
the vector size is 0

```
### 练习 6.48
输入字符串直至`s == sought`。

assert使用不合理。当循环退出时检查assert语句，此时有两种情况，一种是无输入，一种是`s == sought`。后者应是正常流程，应当检测第一种情况报错。
改为```assert(s == sought)```，当assert判断为真的时候不处理，假的时候结束报错。
### 练习 6.49
调用对应的重载函数集中的函数就是候选函数。其与调用函数同名，并在调用点可见。

从候选函数中选出的能被这组实参调用的函数是可行函数。
### 练习 6.50
```
void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);
(a) f(2.56, 42)        //不合法，调用二义性，3,4冲突
(b) f(42)            //最佳匹配 void f(int);
(c) f(42, 0)            //最佳匹配 void f(int, int);
(d) f(2.56, 3.14)        //最佳匹配 void f(double, double = 3.14);
```
### 练习 6.51
[程序6.51: 验证6.50](6.51.cpp)

输出：
```
 error C2666: “f”: 2 个重载有相似的转换
f(int)
f(int, int)
f(double, double = 3.14)

```
### 练习 6.52
(a) 等级3：类型提升，`char`提升成`int`。注意：这种不是类型转换，而是提升

(b) 等级4：算术类型转换，`double`转换成`int`
### 练习 6.53
(a) 重载函数，可传递常量引用

(b) 重载函数，可传递指向常量的指针

(c) 不合法。虽然重载函数，但由于参数忽略顶层const，二者参数完全相同，声明重复。
