/* MyFuncClassEx.h */

#pragma once

#include "MyFuncClass.h"    //���þ������ͷ�ļ�

using namespace System;
using namespace MyFuncClassApplication;    //������������ռ�

namespace MyFuncClassExApplication {
    //public ref:C++/CLI����һ��λ���йܶ��ϵ���������
    public ref class MyFuncClassEx
    {
        // TODO: �ڴ˴���Ӵ���ķ�����
    private:
        /* ʹ�þ�����ָ���������䷽���� */
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

