//
//  main.cpp
//  newstrct
//
//  Created by 陈昶宇 on 2021/7/5.
//

#include <iostream>
struct inflatable {// structure definition
    char name[20];
    float volume;
    double price;
};
int main() {
    using namespace std;
    inflatable * ps = new inflatable;
    cout << "Enter name of inflatable item: ";
    cin.get(ps -> name, 20);
    cout << "Enter volume in cubic feet: " ;
    cin >>(*ps).volume;
    cout << "Enter price: $ ";
    cin >> ps -> price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps -> volume << "cubic feet\n";
    cout << "Price: $ "<< ps->price << endl;
    delete ps;
    return 0;
}
