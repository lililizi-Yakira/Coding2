//
//  main.cpp
//  week1
//
//  Created by miumiu on 2021/2/3.
//
// 在header file(hpp)中 declare your objects 声明
// 在cpp file中 define your obiects 定义
//define和declare都是用来定义变量的，作用域不同。
//其中define定义的为全局变量，在整个session中都有效。
//declare定义的是局部变量，只在定义了该变量的PL/SQL块里有效！

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "some_obiects.hpp"

using namespace std; //使用标准命名空间
//这样命名空间std内定义的所有标识符都有效（曝光）。就好像它们被声明为全局变量一样。

int myInt = 2;
float myPI = 3.14159;

string myString = "Hey there"; //string是C++标准库的一个重要的部分，主要用于字符串处理。可以使用输入输出流方式直接进行string操作，也可以通过文件等手段进行string操作。

myClass bobbins1;
myClass bobbins2;

int main(int argc, const char * argv[]) {
    
  //  srand((int)time(NULL));
  //  myInt = rand();
    
    for (int i =0; i < 10; i++) {
        
        float yeah = i * myPI;
    
        cout << yeah << endl;
        
    }
    
    float anotherFloat = bobbins2.myFunc(102,7.1231) * bobbins1.myFunc(3,10);
        
  cout << anotherFloat << endl ;
    
    return 0;
}
