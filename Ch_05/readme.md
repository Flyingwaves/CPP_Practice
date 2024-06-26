### 练习 5.1
空语句只含有一个单独的分号。语法上需要一条语句但逻辑上不需要，走形式需要一个空语句。
### 练习 5.2
复合语句也叫作块。语法上仅要一条语句，但逻辑上需要多条才能实现，此时会用到块。
### 练习 5.3
```cpp
while(val <= 10)
    sum += val, ++val;
//可读性降低了，一条语句实现的功能多了，就会变得不清晰
```
### 练习 5.4
(a) iter没有进行初始化
```cpp
string::iterator iter = s.begin();
while (iter != s.end()) { /*...*/ }
```
(b) 变量超出作用范围了，while里面好像也是死循环
```cpp
bool status;
while(status = find(word)) { /*...*/ }
if(!status) { /*...*/ }
```
### 练习 5.5
[程序5.5: 成绩转换](5.5.cpp)
### 练习 5.6
[程序5.6: 成绩转换](5.6.cpp)

输入：
```
83 56 73 87 98 65 100 91
```
输出：
```
B F C B A+ D A++ A-
```
### 练习 5.7
```cpp
(a) 分号没写
if (ival1 != ival2)
    ival1 = ival2;
else ival1 = ival2 = 0;

(b) 语法没问题，逻辑不通
if (ival < minval) {
    minval = ival;
    occurs = 1;
}

(c) if中变量没有初始化
if (int ival = get_value())
    cout << "ival = " << ival << endl;
else if (!ival)
    cout << "ival = 0\n";

(d) if (ival == 0)
        ival = get_value();
```
### 练习 5.8
悬垂else：if分支多于else分支，else与if的匹配问题

c++中，else与离它最近的尚未匹配的if进行匹配。
### 练习 5.9
[程序5.9: 统计元音个数](5.9.cpp)

输入：
```
fdjakljfkd dakjsflkjgdasdkjgl klsdajfkjioeuwopugas
ugioaudigv xcvniopwrqut
^Z
```
输出：
```
anct:   6
ecnt:   1
icnt:   4
ocnt:   4
ucnt:   5

```
### 练习 5.10
[程序5.10: 统计元音个数加大写](5.10.cpp)

输入：
```
ueroiwnvcmxzoitaqwsdaf;jz[DIOGSAiguasjIOIOUFIanBKJFGBVo
^Z
```

输出：
```
anct:   5
ecnt:   1
icnt:   7
ocnt:   6
ucnt:   3

```
### 练习 5.11
[程序5.11: 统计元音、空格、制表、换行](5.11.cpp)

**tips**: `cin >> std::noskipws >> ch`这是从答案学的，可以把空白也当做输入字符，方便统计，很适合这道题。

按常理新启一行结束符会多一个回车，那么可以在上一行加一个结束符，新一行再接一个结束符，就可以正常退出不输入回车退出

当为手动输入时候，制表符并不会发生错误，但如果输入为复制粘贴，则会把制表符当做4个空格(可能与自己的编译器设置有关?)，至于文件流输入不知会出现这样的问题吗

输入1：
```
jklasd tuiower   gjldksa        ^Z


^Z
```
输出：
```
anct:   2
ecnt:   1
icnt:   1
ocnt:   1
ucnt:   1
换行符: 2
制表符: 2
空格:   3

```
输入2：
```
uiodfs uqweoi nxzvc             uiot\t\t^Z^Z
^Z
```
输出：
```
anct:   0
ecnt:   1
icnt:   3
ocnt:   3
ucnt:   3
换行符: 0
制表符: 2
空格:   2

```
### 练习 5.12
[程序5.12: 统计元音、ff、fi、fl](5.12.cpp)

输入：
```
ffasdkdf sdfiasldiffsdflflfllflluo
^Z
```
输出：
```
anct:   2
ecnt:   0
icnt:   2
ocnt:   1
ucnt:   1
ffcnt:  2
flcnt:  4
ficnt:  1

```
### 练习 5.13
(a) 没有break分开
```cpp
unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
    case 'a': aCnt ++;
    case 'e': eCnt ++;
    default: iouCnt ++;
}
```
(b) 试图绕过一个初始化的变量
```cpp
unsigned index = some_value();
int ix;
switch (index) {
    case 1:
        ix = get_value();
        ivec[ ix ] = index;
        break;
    default:
        ix = static_cast<int>(ivec.size())-1;
        ivec[ ix ] = index;
```
(c) 一个case标签只能一个整型常量
```cpp
unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10;
switch (digit) {
    case 1: case 3: case 5: case 7: case 9:
        oddcnt++; // oddcnt != oddCnt，书中给出的两个变量并不是一样的，一个大写，一个小写，小心。
        break;
    case 2: case 4: case 6: case 8: case 0:
        evencnt++; // evencnt != evenCnt
        break;
}
```
(d) case标签只能是整型常量，要么修改成const，要么直接用512数字，前者更好一些
```cpp
const unsigned ival=512, jval=1024, kval=4096;
unsigned bufsize;
unsigned swt = get_bufCnt();
switch(swt) {
    case ival:
        bufsize = ival * sizeof(int);
        break;
    case jval:
        bufsize = jval * sizeof(int);
        break;
    case kval:
        bufsize = kval * sizeof(int);
        break;
}
```
### 练习 5.14
[程序5.14: 统计连续重复次数](5.14.cpp)

输入：
```
how now now now brown cow cow
^Z
```
输出：
```
now counts 3
```
### 练习 5.15
(a) ix在for中定义，不能在if中使用
```cpp
int ix;
for (ix = 0; ix != sz; ++ix) { /*...*/ }
if(ix != sz)
    //...
```
(b) 不满足for定义，即使是省略了也要有分号
```cpp
int ix;
for(; ix != sz; ++ix) { /*...*/ }
```
(c) expression要修改初始化的变量，其余不能修改
```cpp
for (int ix = 0; ix != sz; ++ix) { /*...*/ }
```
### 练习 5.16
更喜欢for，可以在内部定义迭代变量，结构工整，多数while都能用for来实现。
```cpp
// while
int i = 0;
while(i < 10) {
    /*...*/
    ++ i;
}
// for
for(int i = 0; i < 10; ++ i) { /*...*/ }
```
### 练习 5.17
[程序5.17: 判断两个vec前缀是否相同](5.17.cpp)
### 练习 5.18
(a) 输出两个数的和，do部分没有括号，离谱，没看出来
```cpp
do {
    int v1, v2;
    cout << "Please enter two numbers to sum:" ;
    if (cin >> v1 >> v2)
        cout << "Sum is: " << v1 + v2 << endl;
while (cin);
```
(b) do-while条件部分有初始化
```cpp
int ival;
do {
    //...
} while(ival = get_response());
```
(c) do-while条件部分变量必须在循环体外定义
```cpp
int ival;
do {
    ival = get_response();
} while (ival);
```
### 练习 5.19
[程序5.19: 选出较短的string](5.19.cpp)

输入/输出：
```
jfldsa jfdklas
较短的是：jfldsa
jfkldas
fjdkals
较短的是：fjdkals
jfd dkfsjl
较短的是：jfd
^Z
无输入

```
### 练习 5.20
[程序5.20: 判断有无连续相同单词](5.20.cpp)

输入：无相同要有结束符哦
```
hf jf jfj jf jf
```
输出：
```
jf
```
### 练习 5.21
[程序5.21: 判断有无连续相同首字母大写单词](5.21.cpp)

输入：无相同要有结束符哦
```
se SE SE jfd jk jk ls
```
```
se Se
^Z
```
输出：
```
SE
```
```
no word
```
### 练习 5.22
```cpp
do {
    int sz = get_size();
} while (sz <= 0);
```
### 练习 5.23
[程序5.23: 输出两个整数相除](5.23.cpp)

输入/输出：
```
78 32
2
65 3
21
^Z

```
### 练习 5.24
[程序5.24: 修改、抛出异常](5.24.cpp)
### 练习 5.25
[程序5.25: 修改、处理异常](5.25.cpp)

输入/输出：
```
3 2
1
2 0
second number is zero
try again and reset the number? Enter y or n
y
3
0
2 0
second number is zero
try again and reset the number? Enter y or n
n

```
