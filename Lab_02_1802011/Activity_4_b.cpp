#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
  string Customer_Id_card_number;
  string first_name;
  string second_name;
  int credit_limit;
public:
void function_for_first_name();
void function_for_second_name();
void function_for_Id_card_number();
void function_for_credit_limit();
void display_fuction();
};
void Customer::function_for_first_name()
{
  std::cout << "Wellcome to costumer portal\n";
  std::cout << "Enter your first name\n";
  std::cin >> first_name;
}
void Customer::function_for_second_name()
{
  std::cout << "Enter your second name\n";
  std::cin >> second_name;
}
void Customer::function_for_Id_card_number()
{
  std::cout << "Enter your Id card number\n";
  std::cin >> Customer_Id_card_number;
}
void Customer::function_for_credit_limit()
{
  int b;
  std::cout << "Enter your credit limmit less than $10000\n";
  for(b=0;b>=0;b++)
  {
  std::cin >> credit_limit;
  if(credit_limit<=10000)
  {
    break;
  }
  std::cout << "Wrong input please enter again less than 10000\n";
  }
}
void Customer::display_fuction()
{
  
  std::cout << "Customer name: " << first_name << " " << second_name <<endl;
  std::cout << "Id card number: " << Customer_Id_card_number <<endl;
  std::cout << "Credit limit: " << credit_limit <<endl;
  std::cout << "This is complete details detect system in records\n";

}

int main()
{
Customer object[5];
int b;
for(b=0;b<5;b++)
{
object[b].function_for_first_name();
object[b].function_for_second_name();
object[b].function_for_Id_card_number();
object[b].function_for_credit_limit();
}
int a;
for(a=0;a<5;a++)
{
  std::cout << ".............................................\n";
  std::cout << "Details of customer: " << a+1 <<endl;
object[a].display_fuction();
}
}
