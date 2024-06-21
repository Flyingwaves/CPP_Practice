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
