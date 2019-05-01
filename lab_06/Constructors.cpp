#include <iostream>
using namespace std;

class base{
protected:
  int x;
public:
base(int a){

x=a;
std::cout << x << '\n';
}
};

class derive : public base{

protected:
  int y;
public:
  derive(int a):base(a){

    y=a;
    std::cout << y << '\n';}


};

int main(){

derive obj(2);



}
