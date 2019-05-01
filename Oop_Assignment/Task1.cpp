#include <iostream>
using namespace std;
class Date
{
private:
  int day;
  int month;
  int year;
public:
  void set_values();
  void display_values();
};
void Date::set_values()
{
  cout << "Enter day like from 1 to 30\n";
  cin >> day;
  cout << "Enter month like 1 to 12\n";
  cin >> month;
  cout << "Enter years like 1800 to 2019\n";
  cin >> year;
}
void Date::display_values()
{
  cout << "************************************\n";
  cout << "Date:" << day << "/" << month << "/" << year <<endl;
  cout << "************************************\n";
}
int main()
{
  Date object1;
  object1.set_values();
  object1.display_values();
  return(0);
}
