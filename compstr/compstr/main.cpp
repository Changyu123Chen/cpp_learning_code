//
//  main.cpp
//  compstr
//
//  Created by 陈昶宇 on 2021/7/6.
//

#include <iostream>
#include <cstring>
int main() {
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word,"mate" ); ch++)/*字符的运算， ch++ 后 a变成 b。。。*/
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}
