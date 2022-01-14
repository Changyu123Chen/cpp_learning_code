//
//  main.cpp
//  assign
//
//  Created by 陈昶宇 on 2021/6/30.
//

#include <iostream>

int main() {
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;
    int guess{3.9832};
    int debt = 7.2E12;
    cout<< "tree = " << tree << endl;
    cout<< "debt = " << debt << endl;
    cout<< "guess = " << guess << endl;
    return 0;
}
/*详情见C++ primer plus 第63页。xcode不允许我将double转换为int啊～*/
