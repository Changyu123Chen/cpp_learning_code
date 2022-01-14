//
//  main.cpp
//  modulus
//
//  Created by 陈昶宇 on 2021/6/30.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;
    cout<<"Enter your weight in pounds.";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " pounds are " <<stone <<" stone, " << pounds << " pound(s).\n";
    return 0;
}
