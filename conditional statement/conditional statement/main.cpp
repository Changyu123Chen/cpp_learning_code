//
//  main.cpp
//  conditional statement
//
//  Created by 陈昶宇 on 2021/6/14.
//

#include <iostream>

int main() {
//    double x{};
//    std::cout<<"enter a number 'x': ";
//    std::cin>> x;
//    if (x >= 0){
//        std::cout<<"|x| = " << x << std::endl;
//    } else {
//        std::cout << "|x| = " << (-x) << std::endl;
//    }
    /////////////////////////////////////////////////////////////////// ///
//    double x{};
//    std::cout<< "Enter a number 'x':";
//    std::cin >> x;
//    double y{};
//    std::cout<< "Enter a number 'y':";
//    std::cin >> y;
//    if (x >= y){
//        std::cout<< "max(x, y)=" << x << std::endl; //记得max（x，y）是字符串，需要加引号
//    } else {
//        std::cout<< "max(x, y)=" << y << std::endl;
//    }
    ///////////////////////////////*****************************************************
//    double b{};
//    std::cout << "Enter a number 'b': " ;
//    std::cin >> b;
//    double x{};
//    std::cout << "Enter a number 'x':";
//    std::cin >> x;
//    if (x<=b && x>=-b) {
//        std::cout<< "clip(x)="<< x << std::endl;
//    } else{
//        if (x>= b) {
//            std::cout<<"clip(x)=" << b << std::endl;
//        } else {
//            std::cout<<"clip(x)=" << -b <<std::endl;
//        }
//    }
//    double x{}; 麻烦了
//    std::cout<<"Enter a number 'x': ";
//    std::cin >> x;
//    if (x>-1 && x<=0) {
//        std::cout<<"tent(x)="<<x+1<<std::endl;
//    } else if(x>0 && x<=1){
//        std::cout<<"tent(x)="<<1-x<<std::endl;
//    }else{
//        std::cout<<"tent(x)="<<0<<std::endl;
//    }
    double x{};
    std::cout<<"Enter a number 'x': ";
    std::cin >> x;
    if (x<=-1){
        std::cout<<"tent(x)="<<0<<std::endl;
    } else if(x<=0){
        std::cout<<"tent(x)="<<x+1<<std::endl;
    }else if (x<1){
        std::cout<<"tent(x)="<<1-x<<std::endl;
    } else {
        std::cout<<"tent(x)="<<0<<std::endl;
    }
    return 0;
}

