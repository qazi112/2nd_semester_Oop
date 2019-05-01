#include <iostream>
using namespace std;
class Rectangle
{
public:
  int length;
  int width;
  void set_data1()
  {
    length=10;
    width=20;
  }
  void display_data1()
  {
    cout << "Length of reactangle:" << length <<endl;
    cout << "width of reactangle:" << width <<endl;
  }
  void display_data_after_operation()
  {
    cout << "Area of reactangle:" << length*width <<endl;
  }
};
class Block: public Rectangle
{
public:
  int Height;

  void set_data2()
  {
    Height=30;
  }
  void display_data2()
  {
    cout << "Height of the Block:" << Height <<endl;
  }
    void display_data_after_multiplication()
    {
      int volume;
      volume=Height*length*width;
      cout << "Volume of Block:" << volume <<endl;
    }

};
int main()
{
  Block object;
  object.set_data1();
  object.display_data1();
  object.display_data_after_operation();
  object.set_data2();
  object.display_data2();
  object.display_data_after_multiplication();
}
