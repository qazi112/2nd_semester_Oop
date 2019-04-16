#include<iostream>
using namespace std;
class B;
class A;

class A{  
 private:
 int a;
 public:
 void setData(int x){
 a=x;
 }
 friend void fun(A,B);
};
class B{
 private:
 int b; 
 public:
 void setData(int y){
 b=y;
 }
 friend void fun(A, B);
};
void fun(A obj1, B obj2){
cout << "sum of two numbers" << obj1.a+obj2.b << endl;
}
int main(){
 A abc;
 B def;
 obj1.setData(2);
 obj2.setData(4);
 fun(obj1, obj2);
}
