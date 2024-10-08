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
### 练习 7.11
[程序7.11: Sales_data类，添加构造函数](7.11.h)

[程序7.11: 测试构造函数](7.11.cpp)

输入输出：
```
sum:  0 0
sum: usnen 0 0
sum: usnbv 5 11.5
jsjei 6 2.3
sum: jsjei 6 13.8

```
### 练习 7.12
[程序7.12: Sales_data类，修改7.11](7.12.h)

这里类内定义时，`read找不到标识符`，要在之前提前声明，但由于read参数包含类，所以在read之前还应有类的声明。

read参数用到类，类中又用到read函数，二者有点类似死锁的感觉，read声明时参数含有类，所以二者都要提前声明。
### 练习 7.13
[程序7.13: Sales_data类，改用输入流构造函数](7.13.cpp)
### 练习 7.14
```
Sales_data(): name(""), saleNum(0), revenue(0) {}  //就把初始值重新放一遍就可以了。
```
### 练习 7.15
[程序7.15: Person类，添加构造函数](7.15.h)
### 练习 7.16
访问说明符的次数没有限制，范围直到下一个访问说明符或者到达类的结尾。

如果成员想被整个程序内访问，比如类的接口，则定义public之后。

如果成员仅被类的成员函数访问，不能被外面使用类的代码访问，则定义在private之后。
### 练习 7.17
class和struct仅在默认访问权限上不同。struct默认public，即若没有访问说明符出现下，所有成员均属于public；class默认private，若无访问说明符控制，所有均为private。
### 练习 7.18
封装实现与接口的分离，其保护成员可以不被随意访问。

封装有两个优点：

确保用户代码不会无意间破坏封装对象的状态；

被封装的类的具体实现细节可以随时改变，而无需调整用户级别的代码。
### 练习 7.19
[程序7.19: Person类，成员访问符](7.19.h)

**public**：构造函数，获取成员的函数；**private**：两个数据对象。

这里read和print要放在public中，如果放在类外，那么会出一些问题，其访问不了类的数据对象，只能调用成员函数，而这样感觉又缺失了与类的相关性。毕竟这两函数服务于person类。
### 练习 7.20
类的接口非成员函数声明为友元，可以访问类的私有变量。

利：友元可以方便地访问类的所有成员。

弊：友元会破坏类的封装性，随意使用可能会对类造成破坏。
### 练习 7.21
[程序7.21: Sales_data类，class封装](7.21.h)
### 练习 7.22
[程序7.22: Person类，class封装](7.22.h)
### 练习 7.23 & 7.24
[程序7.24: Screen类, 基础构造](7.24.h)

注意理解Screen类中各成员的含义
### 练习 7.25
可以。因为类中没有指针类型的成员，不存在需要深拷贝的问题，所以可以使用默认的拷贝和赋值操作。
### 练习 7.26
[程序7.26: Sales_data类, 内联平均价格函数](7.26.h)
### 练习 7.27
[程序7.27: Screen类, 添加函数与重载](7.27.h)

**注：** 私有功能函数相当于把this临时转换的过程抽离出来，利用调用和返回实现this类型的转变。若是直接靠着display，会造成非常量Screen形式上成为常量的假象，无法继续调用其他非const函数。

输出：
```
xxxxxxxxxxxxxxxxxxxx#xxxx
xxxxxxxxxxxxxxxxxxxx#xxxx
```
### 练习 7.28
若返回类型不是引用，那么所有做的操作都是对临时副本做的，并没有对myScreen进行修改。第二行输出的都是临时副本中的内容，当第二行语句执行完毕时，副本将会销毁。

输出：
```
xxxxxxxxxxxxxxxxxxxx#xxxx
xxxxxxxxxxxxxxxxxxxxxxxxx
```
### 练习 7.30
优点：明确指出访问的是数据成员；在成员函数中可以使用与数据成员同名的形参，通过this进行区分。

缺点：有时很多余，因为没有同名形参的时候，默认是数据成员，不用this指明。
### 练习 7.31
```cpp
class Y;    //前向声明
class X {
    Y* ptr;
};

class Y {
    X item;
};
```
### 练习 7.32
[程序7.32: Window_mgr类，友元clear](7.32.h)

注意类之间的声明定义的顺序，定义在友元声明后；类声明要在定义前，准确说是使用私有成员之前。这里screen声明在window类之前，这个例子中好像不声明也没啥问题。
### 练习 7.33
出错，找不到pos是何种类型。因为返回类型未指定作用域
```cpp
Screen::pos Screen::size() const {
    return height * width;
}
```
### 练习 7.34
dummy_fcn函数使用时在前面找不到pos的声明，会报错。注意从定义处之前找，在它眼里类型名的类内全局就在之前。
### 练习 7.35
```cpp
typedef string Type;    //全局作用域Type为string别名
Type initVal();        //全局作用域initVal返回类型string
class Exercise {
public:
    typedef double Type;    //类内作用域Type为double别名
    Type setVal(Type)；    //参数double，返回类型double
    Type initVal();        //类内作用域initVal返回类型double
private:
    int val;
};
Type Exercise::setVal(Type parm) {        //返回类型为全局作用域下string，参数为类内作用域下double
    val = parm + initVal();            //函数体内，用的都是类内作用域initVal
    return val;
}
```
setVal函数参数与返回类型与类内声明不一致，无法匹配造成错误。应改为`Exercise::Type Exercise::setVal(Type parm) {...}`
