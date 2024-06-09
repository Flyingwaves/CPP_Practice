### 练习 3.2
```
//读入一个单词
int main()
{
    string word;
    while (cin >> word) {
        cout << word << endl;
    }
    return 0;
}
```
```
//每次读入一行，空行也读
int main()
{
    string line;
    while (getline(cin, line)) {
        cout << line << endl;
    }
    return 0;
}
```
```
//每次读入一行，空行不读
int main()
{
    string line;
    while (getline(cin, line)) {
        if(line.size() > 0)
            cout << line << endl;
    }
    return 0;
}
```
### 练习 3.3
空白字符有：空格、换行、制表等

string类的输入会忽略开头的空白，从第一个字符读到下一处空白

getline函数以换行符`\n`为分界，每次读取一行，其余空白照常读取。
### 练习 3.4
比较是否相等：[1 问](3.4_1.cpp)

比较是否等长：[2 问](3.4_2.cpp)
### 练习 3.5
连接大字符串：[1 问](3.5_1.cpp)

空格分开大字符串：[2 问](3.5_2.cpp)

补充 **tips**：针对于`while(cin >> string)`这种情况调试问题，在Windows下，利用好结束流ctrl+z，记住其前面不可有其他字符(回车除外)，再输入回车即可结束循环

以第一问测试为例：
```
i am a  good boy  hello
^Z
iamagoodboyhello
```
### 练习 3.6
[程序3.6: X 替换所有字符](3.6.cpp)
### 练习 3.7
不会发生字符替换

原来输出：
```
XXXXXXXXXXXXXXX
```
更改char后输出：
```
I am a good boy
```
### 练习 3.8
[程序3.8: while版本第6题](3.8.cpp)
### 练习 3.9
输出字符串的首个字符。不合法。s为空串时候，s[0]没有意义。
### 练习 3.10
[程序3.10: 去除标点符号](3.10.cpp)
输入：
```
fdjaksl//fj;Fjgf,.sfd[a./,
```
输出：
```
fdjakslfjFjgfsfda
```
### 练习 3.11
c 是`const char&`，也就是字符常量引用。每个 c 都是个引用绑定到对应的常量字符，即别名。

如果范围内对 c 进行赋值修改，则不合法；但如果仅是拷贝，复制等则合法。
### 练习 3.12
(a) 正确。ivec是二维数组，初值为空。

(b) 不正确。svec是存放string类型的容器，不能将vector类型拷贝给它，类型不匹配。

(c) 正确。构造初始化，svec是包含10个元素的容器，每个元素为"null"
### 练习 3.13
(a) v1包含0个元素

(b) v2包含10个元素，初值均为0

(c) v3包含10个元素，初值均为42

(d) v4包含一个元素，值为10

(e) v5包含2个元素，值为10, 42

(f) v6包含10个元素，值均为空串

(g) v7包含10个元素，值均为"hi"
### 练习 3.14
[程序3.14: 存放输入整数](3.14.cpp)

输入：
```
34 235 64 2 3 5 4324 56 23 4
^Z
```
输出：
```
34 235 64 2 3 5 4324 56 23 4
```
### 练习 3.15
[程序3.15: 存放输入字符串](3.15.cpp)

输入：
```
apple banana
orange
water winner
showtime           like
^Z
```
输出：
```
apple banana orange water winner showtime like
```
### 练习 3.16
[程序3.16: 验证3.13输出](3.16.cpp)

输出：
```
v1:
v2: 0 0 0 0 0 0 0 0 0 0
v3: 42 42 42 42 42 42 42 42 42 42
v4: 10
v5: 10 42
v6:
v7: hi hi hi hi hi hi hi hi hi hi

```
### 练习 3.17
[程序3.17: 改大写](3.17.cpp)

输入：
```
wAter  like
aPPlE
cookie
^Z
```
输出：
```
WATER
LIKE
APPLE
COOKIE

```
### 练习 3.18
不合法，修改为：
```
vector<int> ivec;
ivec.push_back(42);
```
### 练习 3.19
```
vector<int> ans(10, 42);
vector<int> ans = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
vector<int> ans;
for(int i = 0; i < 10; i ++)
    ans.push_back(42);
```
第一种更好，直观，简单，构造方式初始化应对定义若干相同元素的容器
### 练习 3.20
[程序3.20.1: 输出相邻的和](3.20_1.cpp)

输入：
```
4
4324

432
523
553
2
23423
32
^Z
```
输出：
```
4328 4756 955 1076 555 23425 23455
```
[程序3.20改: 输出两边元素对的和](3.20_2.cpp)

输入：
```
32 23 6 23 5 1 83 67
^Z
```
输出：
```
99 106 7 28
```
### 练习 3.21
[程序3.21: 迭代器重做3.16](3.21.cpp)
### 练习 3.22
[程序3.22: 第一段改大写](3.22.cpp)

**tips**：如何输入空字符串，连续两次回车就可以，因为读到换行就算一次读入，两次换行之间没有字符也就是读入了空字符串。

输入：
```
i am a good boy.
i love my city.

here, i am ok.
^Z
```
输出：
```
I AM A GOOD BOY.
I LOVE MY CITY.

```
