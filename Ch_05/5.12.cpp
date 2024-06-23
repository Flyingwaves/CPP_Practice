#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
    string s;
    //这道题在于检查两个字符，既可以往后扫，需要字符串输入，较麻烦；亦可以往前看，因为有公共前缀，简单些，当时没想到
    while (cin >> s) {
        for (auto it = s.begin(); it != s.end(); ++ it) {
            switch (*it)
            {
            case 'a': case 'A':
                acnt++;
                break;
            case 'i': case 'I':
                icnt++;
                break;
            case 'e': case 'E':
                ecnt++;
                break;
            case 'o': case 'O':
                ocnt++;
                break;
            case 'u': case 'U':
                ucnt++;
                break;
            case 'f': {
                auto next = it + 1;
                if (next != s.end()) {
                    if (*next == 'f')
                        ffCnt++;
                    else if (*next == 'l')
                        flCnt++;
                    else if (*next == 'i')
                        fiCnt++;
                }
                break;
            }
            
            default:
                break;
            }
        }
        
    }
    cout << "anct:\t" << acnt << endl;
    cout << "ecnt:\t" << ecnt << endl;
    cout << "icnt:\t" << icnt << endl;
    cout << "ocnt:\t" << ocnt << endl;
    cout << "ucnt:\t" << ucnt << endl;
    cout << "ffcnt:\t" << ffCnt << endl;
    cout << "flcnt:\t" << flCnt << endl;
    cout << "ficnt:\t" << fiCnt << endl;
    return 0;
}

//往前看版本
//int main()
//{
//    unsigned acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
//    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
//    char ch, pre = '\0';
//    
//    while (cin >> std::noskipws >> ch) {    //还得要空白，要不然空格分不开，不存
//        switch (ch)
//        {
//        case 'a': case 'A':
//            acnt++;
//            break;
//        case 'i':
//            if (pre == 'f')
//                fiCnt++;    //这里把i的单独条件列下来，其余和大I合并
//        case 'I':
//            icnt++;
//            break;
//        case 'e': case 'E':
//            ecnt++;
//            break;
//        case 'o': case 'O':
//            ocnt++;
//            break;
//        case 'u': case 'U':
//            ucnt++;
//            break;
//        case 'f':
//            if (pre == 'f')
//                ffCnt++;
//        case 'l':
//            if (pre == 'l')
//                flCnt++;
//        default:
//            break;
//        }
//        pre = ch;
//    }
//   
//    cout << "anct:\t" << acnt << endl;
//    cout << "ecnt:\t" << ecnt << endl;
//    cout << "icnt:\t" << icnt << endl;
//    cout << "ocnt:\t" << ocnt << endl;
//    cout << "ucnt:\t" << ucnt << endl;
//    cout << "ffcnt:\t" << ffCnt << endl;
//    cout << "flcnt:\t" << flCnt << endl;
//    cout << "ficnt:\t" << fiCnt << endl;
//    return 0;
//}