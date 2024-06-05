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
