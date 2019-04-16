#include<iostream>
using namespace std;
class Distance {
 private:
friend int func(Distance); //friend function
int meter;
public:
}
;
int func(Distance d){
 //function definition
 d.meter=10; //accessing private data from non-member function
 return d.meter;
}
int main(){
Distance D;
 cout<<"Distace: "<<func(D)<<endl;
 return 0;
}
