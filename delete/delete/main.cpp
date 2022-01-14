//
//  main.cpp
//  delete
//
//  Created by 陈昶宇 on 2021/7/5.
//

#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);
int main() {
    char * name; //create pointer but no storage
    
    name = getname(); //assign address of string to name
    cout << name << " at " << (int *) name << "\n";
    delete [] name; //memory freed
    
    name = getname(); //reuse freed memory
    cout << name << " at " << (int *)name << "\n";
    delete [] name; //memory freed again
    return 0;
}
char * getname()
{
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp; //使用cin将单词放入temp数组中，使用new来重新分配新的内存
    char * pn = new char[strlen(temp) + 1];//程序需要strlen（temp） + 1 个字符（包括空字符） 来存储该字符。把这个告诉new以获得空间
    strcpy(pn, temp); //copy string into smaller space
    //将temp中的字符串复制到新的内存块中。该函数不检查内存快是否能够容纳字符串。但之前已经用new来请求合适的字节数
    return pn; // temp lost when function ends 这是字符串副本的地址。这个值被返回给了name
}
