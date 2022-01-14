//
//  main.cpp
//  address
//
//  Created by 陈昶宇 on 2021/7/1.
//

#include <iostream>

int main() {
    using namespace std;
    int donuts = 6;
    double cups = 4.5;
    
    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
    //NOTE: you may need to use unsigned (&donuts)
    //and unsigned (&cups)
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    return 0;
}
