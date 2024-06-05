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

补充**tips**：针对于`while(cin >> string)`这种情况调试问题，在Windows下，利用好结束流ctrl+z，记住其前面不可有其他字符(回车除外)，再输入回车即可结束循环

以第一问测试为例：
```
i am a  good boy  hello
^Z
iamagoodboyhello
```
