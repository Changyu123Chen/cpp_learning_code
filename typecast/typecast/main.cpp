//
//  main.cpp
//  typecast
//
//  Created by 陈昶宇 on 2021/6/30.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int auks, bats, coots;
    auks = 19.99 + 11.99;
    bats = (int) 19.99 + (int) 11.99;
    coots = int(19.99) + int(11.99);
    cout << "auks = "<< auks << ", bats = " << bats;
    cout << " coots = " << coots << endl;
    return 0;
}
//首先,将19.99和11.99相加,结果为31.98。将这个值赋给int变量auks时,它被截短为31。但在进行加法运算之前使用强制类型转换时,这两个值将被截短为19和11,因此bats和 coots的值都为30。接下来,两条cout语句使用强制类型转换将char类型的值转换为int,再显示它。这些转换导致cout将值打印为整数,而不是字符。
//
