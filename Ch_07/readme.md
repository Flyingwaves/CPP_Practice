### 练习 7.1
[程序7.1: 书店程序](7.1.cpp)

输入/输出：
```
ar 2 3.2
ar 3 4.3
ar 2 5.6
fi 1 3
sum: ar 7 30.5
ki 3 2.3
sum: fi 1 3
^Z
sum: ki 3 6.9

```
### 练习 7.2
[程序7.2: Sales_data类](7.2.h)
### 练习 7.3
[程序7.3: 改进交易程序](7.3.cpp)

输入/输出：
```
hosso 4 23.2
hosso 5 22.3
fdjsk 5 22.3
sum: hosso 9 45.5
djfks 7 11.2
sum: fdjsk 5 22.3

^Z
sum: djfks 7 11.2

```
### 练习 7.4 & 7.5
[程序7.4: Person类](7.4.h)

函数应该是const的，因为这些函数只需要读取数据成员，无需更改，所以应作为常量成员函数。

常量对象只能调用常量成员函数，因为this不能绑定在常量上；普通对象则常量成员函数和普通成员函数都可调用。
### 练习 7.6
[程序7.6: Sales_data类，补充接口](7.6.h)
### 练习 7.7
[程序7.7: 改进交易程序](7.7.cpp)

输入/输出：
```
aauuu 4 3.2
aauuu 5 2.3
aauuu 6 8.2
bbsss 2 4.4
sum: aauuu 15 73.5
bbsss 2 4.3
ccuuu 1 2.3
sum: bbsss 4 17.4
^Z
sum: ccuuu 1 2.3

```
### 练习 7.8
因为read函数会对参数进行写入，会改变流内容，而print函数仅仅读取流，不会改变。
### 练习 7.9
[程序7.9: Person类，补充接口](7.9.h)
### 练习 7.10
同时读取`data1`和`data2`两个数据，如果都读取成功了则判断为真，如果至少有一个读取不够则为假