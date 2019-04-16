  #include <iostream>
  #include <string>
  using namespace std;
  //Class 1
  class Customer_city_data;
  class Customer_data
  {
  private:
    int number;
    int zip;
  public:
    Customer_data();
    friend void display(Customer_data,Customer_city_data);
  };
  //Class 2
  class Customer_city_data
  {
  private:
    string city;
    string state;
  public:
  Customer_city_data();
  friend void display(Customer_data,Customer_city_data);
  };
  //Construtor inialization
  Customer_data::Customer_data()
  {
    cout << "Enter your Customer number\n";
    cin >> number;
    cout << "Enter your Customer zip code\n";
    cin >> zip;
  }
 Customer_city_data::Customer_city_data()
 {
   cout << "Enter your Customer city name\n";
   cin >> city;
   cout << "Enter your Customer state name\n";
   cin >> state;
 }
 // Friend function inialization
  void display(Customer_data object1,Customer_city_data object2)
  {
    cout << "Customer number:" << object1.number <<endl;
    cout << "Zip code:" << object1.zip <<endl;
    cout << "City name:" << object2.city << endl;
    cout << "State:" << object2.state <<endl;
  }
  //Main function
  int main()
  {
    Customer_data object1;
    Customer_city_data object2;
    display(object1,object2);
  }
