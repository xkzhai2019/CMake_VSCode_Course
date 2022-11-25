#pragma once // 防止头文件重复包含

#include <iostream> // 标准输入输出

class swap
{

public:
    swap(int a, int b)
    {
        this->_a = a;
        this->_b = b; // this指针方便区分
    }
    void run();
    void printInfo();

private:
    int _a;
    int _b;
};