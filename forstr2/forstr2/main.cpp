//
//  main.cpp
//  forstr2
//
//  Created by 陈昶宇 on 2021/7/6.
//

#include <iostream>
#include <string>
int main() {
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;
    //physically modify string object
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; i--, j++){
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDone\n";
    return 0;
}
