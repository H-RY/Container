//
// Created by hry on 2024/2/16.
//

#include "HArray.h"
#include "iostream"

void add() {

}

int main() {
    HArray arr;
    HArray::Arr array;

    arr.init(array);
    std::cout << array.len << std::endl;

    struct temp {
        int b; // 4
        bool c; // 1 4
        int d; // 4
        short f; // 2
        char g; // 1 2
        int h; //4
    };
    temp t1;


    std::cout << sizeof(t1.b) << std::endl;
    std::cout << sizeof(t1.f) << std::endl;
    std::cout << sizeof(t1.g) << std::endl;
    std::cout << sizeof(t1.c) << std::endl;
    std::cout << sizeof(temp) << std::endl;
    std::cout << sizeof(t1) << std::endl;


    return 0;
}

void HArray::init(HArray::Arr array) {
    array.len = 10;
}