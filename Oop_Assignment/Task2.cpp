#include <iostream>
using namespace std;
class Date
{
private:
  int day;
  int month;
  int year;
public:
  void initialize_values();
  void set_values();
  void display_values();
  void Validity();
};
void Date::initialize_values()
{
  int day=0;
  int month=0;
  int year=0;
}
void Date::set_values()
{
  cout << "Enter day\n";
  cin >> day;
  cout << "Enter month like 1 to 12\n";
  cin >> month;
  cout << "Enter years like 1800 to 2019\n";
  cin >> year;
}
void Date::Validity()
{
  if(year<1800||year>2019)
  {
    cout << "Year is not valid enter from 1800 to 2019\n";
    set_values();
  }
  else if(month<1||month>12)
  {
    cout << "Month in not valid so enter it from 1 to 12\n";
    set_values();
  }
  else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
  {
    if(day>31||day<1)
    {
      cout << "Enter valid days because this month is 31\n";
      set_values();
    }
  }
  else if(month==2)
  {
    if(day<1||day>28)
    {
      cout << "Enter valid days this month is 28 or 29 in case Leap year\n";
      set_values();
    }
  }
  else if(month==4||month==6||month==9||month==11)
  {
    if(day<1||day>30)
    {
      cout << "Enter valid days this month is 30\n";
      set_values();
    }
  }

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
  object1.initialize_values();
  object1.set_values();
  object1.Validity();
  object1.display_values();
  return(0);
}
