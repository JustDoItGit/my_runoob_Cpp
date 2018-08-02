#include <iostream>
 
using namespace std;
 
int main ()
{
   int  var;
   int  *ptr;
   int  **pptr;
   int  ***ppptr;
 
   var = 3000;
 
   // 获取 var 的地址
   ptr = &var;
 
   // 使用运算符 & 获取 ptr 的地址
   pptr = &ptr;

   ppptr = &pptr;
 
   // 使用 pptr 获取值
   cout << "Value of var :" << var << endl;
   cout << "Value available at *ptr :" << *ptr << endl;
   cout << "Value available at **pptr :" << **pptr << endl;
   cout << "Value available at ***ppptr :" << ***ppptr << endl;
 
   return 0;
}