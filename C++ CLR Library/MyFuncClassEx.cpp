#include "pch.h"
#include "MyFuncClassEx.h"


/* MyFuncClassEx.cpp */

// 这是主 DLL 文件。

//#include "stdafx.h"

namespace MyFuncClassExApplication
 {
	     MyFuncClassEx::MyFuncClassEx()
	     {
	         this->pInstance = new MyFuncClass();
	     }
	
	     MyFuncClassEx::~MyFuncClassEx()
	     {
	         delete this->pInstance;
	     }
	
	     double MyFuncClassEx::Add(double a, double b)
	     {
	         return this->pInstance->Add(a, b);
	     }
	   double MyFuncClassEx::Subtract(double a, double b)
	     {
	         return this->pInstance->Subtract(a, b);
	     }
	   double MyFuncClassEx::Multiply(double a, double b)
	     {
	         return this->pInstance->Multiply(a, b);
	     }
	   double MyFuncClassEx::Divide(double a, double b)
	     {
	         return this->pInstance->Divide(a, b);
	     }
	 }