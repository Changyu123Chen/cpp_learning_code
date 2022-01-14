//
//  main.cpp
//  共同体
//
//  Created by 陈昶宇 on 2021/7/1.
//

#include <iostream>
union one4all
{
    int int_val;
    long long_val;
    double double_val;
};
int main() {
    using namespace std;
    one4all pail;
    pail.int_val = 1.5; //store an-int
    cout << pail.int_val;
    pail.double_val = 1.38; //store a double, int value is lost
    cout << pail.double_val;
    return 0;
}
