### 练习 2.1
int和short的最小尺寸是16位，long是32位，long long是64位

带符号类型能够表示正数、负数和0，无符号类型只能表示大于等于0的值

根据IEEE 754，float占32位，分别1位符号位+8位阶码+23位尾数；double占64位，分别1位符号位+11位阶码+52位尾数
### 练习 2.2
利率、本金、付款都为小数，采用浮点数类型比较好
### 练习 2.3
输出结果：
```
u2 - u = 32
u - u2 = 4294967264
i2 - i = 32
i - i2 = -32
i - u = 0
u - i = 0
```
### 练习 2.5
(a) char型字面值、宽字符字面值、字符串字面值、宽字符串字面值

(b) 整型、无符号整型、长整型、无符号长整型、八进制整数、十六进制整数

(c) double型、float型、long double型

(d) int型、unsigned int型、double、double
### 练习 2.6
```
int month = 9, day = 7    //十进制数表示没有问题
int month = 09, day = 07  //八进制数中不可以出现9，故month出错，day没问题
```
### 练习 2.7
(a) Who goes with Fergus?\n  `string`

(b) 31.4 `long double`

(c) 1024 float  这里应是出错，`f`后缀一定在一个明确小数后面，而不是整数后面

(d) 3.14 `long double`
### 练习 2.8
```
std::cout << "2\115\n";
std::cout << "2\t\115\n";
```
输出：
```
2M
2       M
```
### 练习 2.9
(a) 错误。输入将istream变量赋值给右侧变量，但右侧变量未经初始化不可赋值

(b) 错误。列表初始化，存在缺失信息的可能，在这里精度会缺失，故转换未执行

(c) 若wage提前声明，则正确；否则错误

(d) 正确。精度缺失
### 练习 2.10
`global_str`为空串；`global_int`为0，其在函数体外；`local_int`在函数体内，未被初始化，故值是未定义的；`local_str`未提供初值，故按照string类默认初始化为空串
### 练习 2.11
(a) 定义  、(b) 定义  、(c) 声明
### 练习 2.12
(a) double是关键字

(b) 合法

(c) 变量名中不可含有 '-'

(d) 变量名不可以数字开头

(e) 合法
### 练习 2.13
j 的值是100
### 练习 2.14
输出：i 输出的为外层作用域，而不是for的内层作用域
```
100 45
```
### 练习 2.15
(a) 合法。

(b) 不合法。引用类型初始值必须为对象，而不能是字面量

(c) 合法。

(d) 不合法。引用必须初始化
### 练习 2.16
(a) 合法。d 赋值为3.14159

(b) 合法。d 赋值为0

(c) 合法。i 赋值为0，小数转整数，后两种情况是一样的

(d) 合法。i 赋值为0
### 练习 2.17
输出：`ri`和`i`本质一样，以最后`ri = 10`，决定了二者的值都为10

`10 10`
### 练习 2.18
```
int a = 1, b = 2;
int* pa = &a, * pb = &b;	//pa, pb初始化
*pa = 3;	//更改指针指向对象的值
pb = pa;	//更改指针的值
std::cout << *pa << " " << * pb << std::endl;
```
输出：
```
3 3
```
### 练习 2.19
引用是对象的另一个名字，指针是指向另一种类型的复合类型

1.指针本身就是一个对象，在生命周期中可以修改指向不同对象。但引用不是对象，它与对象的初始值绑定在一起，并且不可更改

2.指针无须在定义时赋初值，也可以不初始化。但引用必须初始化。

3.指针可以赋值或拷贝，但引用无法重新绑定。
### 练习 2.20
```
int i = 42;        
int* p1 = &i;      //p1指向i
*p1 = *p1 * *p1;   //p1指向的i的值变为1764 = 42 * 42
std::cout << *p1;
```
### 练习 2.21
(a) 非法。指针与指向对象类型不匹配

(b) 非法。指针变量赋值要赋予一个地址，而不是值本身

(c) 合法。
### 练习 2.22
```
if(p)	//p是空指针为假，非空指针为真
if(*p)	//p指向对象为0是假，非0是真
```
### 练习 2.23
不能。
### 练习 2.24
`p`是`void*`型指针，可以指向任意类型的对象。但`lp`是`long*`型指针，不可以指向`int`型对象。
### 练习 2.25
(a) ip是指向int型对象的指针、i是int型、r是int型引用

(b) i是int型。ip是指向int型的指针，它是一个空指针

(c) ip是指向int的指针。ip2是int型
### 练习 2.26
(a) 不合法。const对象未进行初始化

(b) 合法

(c) 合法

(d) `++cnt`合法。`++sz`不合法，sz是const对象，不可改变。
### 练习 2.27
```
(a) int i = -1, &r = 0;          //r的初始化不合法，r的初值必须是一个对象
(b) int *const p2 = &i2;         //合法，p2是常量指针
(c) const int i = -1, &r = 0;    //合法，r是常量引用，可以初始化为字面值或表达式
(d) const int *const p3 = &i2;   //合法，p3是指向常量的常量指针
(e) const int *p1 = &i2;         //合法，p1是指向常量的指针
(f) const int &const r2;         //不合法，r2是引用不是对象，并不具有类型const
(g) const int i2 = i, &r = i;    //合法
```
### 练习 2.28
```
(a) int i, *const cp;            //i是int, cp是常量指针.               cp不合法, 其必须被初始化
(b) int *p1, *const p2;          //p1是指向int的指针, p2是常量指针.    p2不合法, 其必须被初始化
(c) const int ic, &r = ic;       //ic是int常量, r是常量引用.           ic不合法, 其必须初始化
(d) const int *const p3;         //p3是指向常量的常量指针.             p3不合法, 必须初始化
(e) const int *p;                //p是一个指向常量的指针
```
### 练习 2.29
```
//根据题意，以下均是赋值操作，并非初始化操作。
(a) i = ic;      //合法
(b) p1 = p3;     //不合法，p3指向的值不可更改，不可以由p1指向
(c) p1 = &ic;    //不合法，常量对象的地址不能用普通指针来存，必须用指向常量的指针，同理ic的值不可更改
(d) p3 = &ic;    //不合法，常量指针不可更改
(e) p2 = p1;     //不合法，p2是常量指针，也是不可赋值更改
(f) ic = *p3;    //不合法，ic是个常量，其值不可赋值更改
```
### 练习 2.30
```
const int v2 = 0;        //v2是顶层const
int v1 = v2;             
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;    //p2是底层const，p3既是顶层const又是底层const，r2是底层const
```
### 练习 2.31
```
r1 = v2;    //合法，v2顶层const拷贝不受影响。
p1 = p2;    //不合法，p2是底层const但p1不是
p2 = p1;'   //合法，int*能转换为const int*，普通指针拷贝不受影响，可以赋值给底层const
p1 = p3;    //不合法，p3是底层const但p1不是
p2 = p3;    //合法，二者都有相同底层const资格 
```
### 练习 2.32
非法。
```
//我的方案
constexpr int null = 0;
int *p = null;
//更改
int null = 0, *p = &null;
int null = 0, *p = nullptr;
```
### 练习 2.33
本节定义变量如下：
```
int i = 0, &r = i;
const int ci = i, &cr = ci;
auto a = r;
auto b = ci;
auto c = cr;
auto d = &i;
auto e = &ci;
auto &g = ci;
```
运行结果：
```
a = 42;    //a是一个普通int，正常赋值
b = 42;    //b是一个普通int，正常赋值
c = 42;    //c是一个普通int，正常赋值
d = 42;    //d是整型指针，发生错误，并未赋值一个地址
e = 42;    //e是指向整型常量的指针，出错，未赋值一个地址
g = 42;    //g是常量引用，出错，常量引用不可更改
```
### 练习 2.35
这里这个const auto总感觉很奇怪，不太熟悉
```
const int i = 42;
auto j = i;      //j是普通int
const auto &k = i;      //k是int常量引用，易错
auto *p = &i;           //p是指向常量int的指针
const auto j2 = i, &k2 = i;      //j2是int常量，k2是int常量引用，易错
```
### 练习 2.36
```
int a = 3, b = 4;
decltype(a) c = a;    //c是int
decltype((b)) d = a;  //d是int引用，int&
++ c;
++ d;
```
输出结果：
```
a = 4
b = 4
c = 4
d = 4
```
### 练习 2.37
```
int a = 3, b = 4;
decltype(a) c = a;        //c是int，c = 3
decltype(a = b) d = a;    //d是int&，这里分析表达式但并不执行表达式
```
输出结果：
```
a = 3, b = 4, c = 3, d = 3
```
### 练习 2.38
1.decltype处理顶层const和引用时，会将其保留下来作为返回类型。但auto会忽略顶层const和引用

2.decltype结果类型与表达式形式有关，有时候在变量外面加括号会得到不同的类型。
```
int a = 6;
auto m = a;          //m是int
decltype(a) n = a;   //n是int

const int c = 24;
auto j = c;          //j是int
decltype(c) k = c;   //k是const int
```
### 练习 2.39
Error message: [Error] expected ';' after struct definition
### 练习 2.40
```
struct Sales_data {
    std::string name;
    std::string bookNum;
    int saleNum;
    double price;
    double revenue;
};
```
### 练习 2.42
示例运行：ctrl+z可以结束输入，解决了循环等待输入无法验证的烦恼
```
nb
3
2.4
nb
4
3.8
fjdskl
5
5.5
nb 7 22.4
^Z
fjdskl 5 27.5
```
