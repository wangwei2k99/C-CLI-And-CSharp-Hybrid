/* MyFuncClassEx.h */

#pragma once

#include "MyFuncClass.h"    //引用具体类的头文件

using namespace System;
using namespace MyFuncClassApplication;    //具体类的命名空间

namespace MyFuncClassExApplication {
    //public ref:C++/CLI创建一个位于托管堆上的引用类型
    public ref class MyFuncClassEx
    {
        // TODO: 在此处添加此类的方法。
    private:
        /* 使用具体类指针来访问其方法。 */
        MyFuncClass* pInstance;

    public:
        MyFuncClassEx();
        ~MyFuncClassEx();

        double Add(double a, double b);
        double Subtract(double a, double b);
        double Multiply(double a, double b);
        double Divide(double a, double b);
    };
}

