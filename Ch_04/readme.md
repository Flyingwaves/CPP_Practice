### 练习 4.1
求值结果是 105
### 练习 4.2
```cpp
(a) *(vec.begin())
(b) (*(vec.begin())) + 1
```
### 练习 4.3
不可以。不同编译器优化结果可能导致求值顺序不一样，出现无法解决的错误。
### 练习 4.4
```cpp
((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2)
= 16 + 75 + 0
= 91
```
### 练习 4.5
(a) -90 + 4 = -86

(b) -30 + 12 = -18

(c) 210 % 5 = 0

(d) -210 % 4 = -2
### 练习 4.6
```cpp
i % 2    //求余法
i & 0x1    //位运算法
```
### 练习 4.7
溢出：计算结果超越类型的表示范围
```cpp
short a = 32767; a ++;       //a = -32768
short b = -32768; b = -b;    //b = -32768
unsigned c = 0; c --;        //c = 4294967295
```
### 练习 4.8
逻辑与：只有左侧为真，才对右侧求值判断

逻辑或：只有左侧为假，才对右侧求值判断

相等：没啥顺序，两边都要算
### 练习 4.9
首先看`cp`，非空指针，左侧为真

再看`*cp`，解引用为第一个元素，常量`'H'`，非0，右侧为真

所以if条件判断为真
### 练习 4.10
```cpp
while(cin >> num && num != 42)
```
### 练习 4.11
```cpp
a < b && b < c && c < d
```
### 练习 4.12
根据优先级，先判断`j < k`

若为假，转化为`i != false`，由于i不是布尔类型，进而转化为`i != 0`

若为真，转化为`i != true`，同理，可进一步变为`i != 1`
### 练习 4.13
```cpp
int i; double d;
(a) d = i = 3.5;    //i = 3, d = 3.0  注意这里是3.0而非整数3
(b) i = d = 3.5;    //d = 3.5, i = 3
```
### 练习 4.14
```cpp
if(42 = i)        //报错。赋值左侧运算对象不能是右值，而整数字面量是右值。
if(i = 42)        //将42赋值给i，判断为真，执行if分支
```
### 练习 4.15
`pi`是`int*`型，`ival`是`int`型，二者不能转换，所以`ival = pi = 0`是非法的
```cpp
double dval; int ival; int *pi;
pi = 0;
dval = ival = 0;
```
### 练习 4.16
```cpp
(a) if(p = getPtr() != 0)

//赋值运算符优先级低，导致运算顺序出错，出现意外的结果。
if((p = getPtr()) != 0)

(b) if(i = 1024)

//混淆相等运算符和赋值运算符
if(i == 1024)
```
### 练习 4.17
简易的来讲，前置运算符表示先算再用，后置运算符是先用后算。

但是实际上并不是优先级发生了变化，后置运算符依然执行的先计算，只不过它多了个副本保存之前的结果，造成了这种“先用后算”的错觉。

前置运算符将对象本身作为左值返回；后置运算符将原始值的副本作为右值返回。
### 练习 4.18
UB = Undefined Behavior，未定义行为

程序将会从第二个元素开始输出非负数。如果没有负数，最后还会试图解引用尾后位置，是非法的，报错。
### 练习 4.19
```cpp
int* ptr;
vector<int> vec;
int ival;

(a) ptr != 0 && *ptr++
//ptr非空指针，并且ptr指向的值非0，为真

(b) ival++ && ival
//先检查ival是否为0，再检查ival + 1是否为0

(c) vec[ival++] <= vec[ival]
//未定义，<= 未规定求值顺序，先左先右结果不同
//先右：vec[ival] <= vec[ival]
//先左：vec[ival] <= vec[ival + 1]
//更改
vec[ival] <= vec[ival + 1]
```
### 练习 4.20
```cpp
(a) *iter++;    //合法。迭代器前移，再把原迭代器解引用

(b) (*iter) ++;    //合法。解引用迭代器，再把其所指的值加1

(c) *iter.empty();    //不合法。优先点运算符，但iter是迭代器，没有empty成员

(d) iter->empty();    //合法。等价于(*iter).empty()，给出迭代器指向是否为空串

(e) ++*iter;    //不合法。先解引用iter，再++，但字符串无法自增。

(f) iter++->empty();    //合法。迭代器前移，再将原来所指的串是否为空的结果返回；等价于iter->empty(); iter++;
```
### 练习 4.21
[程序4.21: 奇数翻倍](4.21.cpp)

输入：
```
1 2 3 4 5 6 7 8 9 0
^Z
```
输出：
```
2 2 6 4 10 6 14 8 18 0
```
### 练习 4.22
[程序4.22: 嵌套条件运算](4.22.cpp)
### 练习 4.23
计算顺序：`[]`、`+`、`==`、`? :`、`=`

执行`s + 'd' == 's'`发生错误，两边类型不匹配，应改为：
```cpp
string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
```
### 练习 4.24
若满足左结合律，首先执行`(grade > 90) ? "high pass" : (grade < 60)`

若成绩在90分以上，则返回`"high pass"`, 继续执行`"high pass" ? "fail" : "pass"`；此时一定返回`"fail"`

相反，则返回`grade < 60`， 继续执行`"grade < 60 ? "fail" : "pass"`
### 练习 4.25
提升至int：00000000 00000000 00000000 01110001

取反：11111111 11111111 11111111 10001110

左移6位：11111111 11111111 11100011 10000000，补码转换就是-7296

最后值为-7296
### 练习 4.26
unsigned int 最低16位，不足以表示30位同学的成绩情况，移位量过大的话会产生未定义的行为。
### 练习 4.27
```cpp
ul1 = 00000000 00000000 00000000 00000011
ul2 = 00000000 00000000 00000000 00000111
(a) ul1 & ul2 = 00000000 00000000 00000000 00000011 = 3;
(b) ul1 | ul2 = 00000000 00000000 00000000 00000111 = 7;
(c) ul1 && ul2 = true;
(d) ul1 || ul2 = true;
```
### 练习 4.28
[程序4.28: 输出内置类型大小](4.28.cpp)

输出：(这个对齐真美，得好好学学\t，用不好）
```cpp
void: nullptr_t 4 bytes

bool:           1 bytes

char:           1 bytes
wchar_t:        2 bytes
char16_t:       2 bytes
char32_t:       4 bytes

short:          2 bytes
int:            4 bytes
long:           4 bytes
long long:      8 bytes

float:          4 bytes
double:         8 bytes
long double:    8 bytes

int8_t:         1 bytes
uint8_t:        1 bytes
int16_t:        2 bytes
uint16_t:       2 bytes
int32_t:        4 bytes
uint32_t:       4 bytes
int64_t:        8 bytes
uint64_t:       8 bytes

```
### 练习 4.29
指针`p`所占4字节，其所指对象也占4字节，所以第二行是1.

输出：
```
10
1

```
### 练习 4.30
```cpp
(a) (sizeof x) + y
(b) sizeof (p->mem[i])
(c) (sizeof a) < b
(d) sizeof f()
```
### 练习 4.31
前置版本用的对象本身，而后置版本用的对象变化前的副本，会造成资源的浪费。

使用后置版本不需要做什么改动：
```cpp
vector<int>::size_type cnt = ivec.size();
for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
        ivec[ix] = cnt;
```
### 练习 4.32
遍历整个数组，进行有关操作。

ptr和ix的作用是一样的，ptr用的是指针，ix用的是下标。
### 练习 4.33
```cpp
someValue ? ++x, ++y : --x , --y
= (someValue ? ++x, ++y : --x) , --y
//当someValue = true时，计算++x和++y, 再计算--y，表达式最终结果是y
//当someValue = false时，计算--x，再计算--y，表达式最终结果是y - 1

//个人认为，一个表达式的最终结果可以看作为其返回值
```
### 练习 4.34
```cpp
(a) if(fval);    //float转化为bool
(b) dval = fval + ival;    //ival转化为float, 结果再转换为double
(c) dval + ival * cval;    //cval提升至int, 之后ival和cval转换成double
```
### 练习 4.35
```cpp
(a) cval = 'a' + 3;    //发生了, 'a'提升至int, 'a'+3的结果转换成char
(b) fval = ui - ival * 1.0;    //发生了, ival和ui转换成double，求值结果转换成float
(c) dval = ui * fval;    //ui转换成float，结果再转换成double
(d) cval = ival + fval + dval;    //ival和fval转换成double，结果再转换成char
```
### 练习 4.36
```cpp
i *= static_cast<int> (d);
```
### 练习 4.37
```cpp
pv = static_cast<void*>(const_cast<string*>(ps));
i = static_cast<int>(*pc);
pv = static_cast<void*>(&d);
pc = static_cast<char*>(pv);
```
### 练习 4.38
先计算int型`j`与int型`i`的除法，得到int型结果，再将这个结果强制转换成double型赋值给`slope`
