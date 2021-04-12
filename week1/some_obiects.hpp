//
//  some_obiects.hpp
//  week1
//
//  Created by miumiu on 2021/2/3.
//

#ifndef some_obiects_hpp
#define some_obiects_hpp

#include <stdio.h>
#include<math.h>

class myClass { // 定义/声明一个名为myClass的类，不创建实例。
    
    int x = 100;
    float y = 3.14159;
    
public:
    //声明公用变量和分配存储空间
    //在public: 下的成员，是类的公有成员，别的类或者主函数可以申明个对象直接访问，
    //而private: 下的是私有成员，只有类的内部能访问，类的外部无法访问的．
    int c = 128;
    float myFunc(float x, float y);
};

#endif /* some_obiects_hpp */
