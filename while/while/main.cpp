//
//  main.cpp
//  while
//
//  Created by 陈昶宇 on 2021/7/6.
//

#include <iostream>
const int ArSize = 20;
int main() {
    using namespace std;
    char name[ArSize];
    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized: \n";
    int i = 0;
    while (name[i] != '\0')
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++; //dont forget this step
    }
    
    return 0;
}
