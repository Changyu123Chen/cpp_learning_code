//
//  main.cpp
//  pointer
//
//  Created by 陈昶宇 on 2021/7/1.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int updates = 6;//declare a variable
    int *p_updates;// declare pointer to an int
    p_updates = &updates;//asign address of int to pointer
    //express value two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;
    
    //express address two ways
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    
    //use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    return 0;
}
