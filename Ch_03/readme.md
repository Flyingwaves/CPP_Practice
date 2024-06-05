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
