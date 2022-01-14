//
//  main.cpp
//  compstr2
//
//  Created by 陈昶宇 on 2021/7/6.
//

#include <iostream>
#include <string>
int main(int argc, const char * argv[]) {
    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ++ch)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}
