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
