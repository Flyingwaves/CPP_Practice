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
