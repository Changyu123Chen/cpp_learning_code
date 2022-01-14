//
//  main.cpp
//  the unit pulse
//
//  Created by 陈昶宇 on 2021/6/15.
//

#include <iostream>

int main(int argc, const char * argv[]) {
//    double x{};
//    std::cout<<"Enter a number 'x': ";
//    std::cin>> x;
//    if (x>1 || x<0){
//        std::cout<< "unit(x) = " << 0 << std::endl;
//    }else if (x==0 || x==1) {
//        std::cout<<"unit(x) = 1/2"<<std::endl;
//    }else{
//        std::cout<<"unit(x) = 1"<<std::endl;
//    }
    double x{};
    double y{};
    double z{};
    std::cout<<"Enter a number 'x': ";
    std::cin>>x;
    std::cout<<"Enter a number 'y': ";
    std::cin>>y;
    std::cout<<"Enter a number 'z': ";
    std::cin>>z;
    if (x>=y && x>=z){
        std::cout<<"max(x, y, z) = "<< x << std::endl;
    } else if(y>=z){
        std::cout<<"max(x, y, z) = "<< y <<std::endl;
    } else {
        std::cout<<"max(x, y, z) = "<< z <<std::endl;
    }
    return 0;
}


