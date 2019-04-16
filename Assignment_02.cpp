#include <iostream>
using namespace std;
class job
{
private:
  int job_number;
  int time_to_complete_job;
  int charge_per_hour;
public:
  friend ostream &operator << (ostream &output,job &j);
  friend istream &operator >> (istream &input,job &j);
  job operator+(job a);
  job operator-(job b);
  void display();
  void display2();
};
void job::display()
{
  cout << "Your total time for two jobs:" << time_to_complete_job <<endl;
}
void job::display2()
{
  cout << "Your time disffence for two jobs:" << time_to_complete_job <<endl;
}
job job::operator+(job a)
{
  job temp;
  temp.time_to_complete_job=time_to_complete_job+a.time_to_complete_job;
  return temp;
}
job job::operator-(job a)
{
  job temp;
  if(time_to_complete_job>a.time_to_complete_job)
  {
  temp.time_to_complete_job=time_to_complete_job-a.time_to_complete_job;
  return temp;
  }
  else if(time_to_complete_job<a.time_to_complete_job)
  {
  temp.time_to_complete_job=a.time_to_complete_job-time_to_complete_job;
  return temp;
  }
}
 istream &operator >> (istream &input,job &j)
{
  cout << "Enter job_number\n";
  input >> j.job_number;
  cout << "Enter time_to_complete_job\n";
  input >> j.time_to_complete_job;
  cout << "Enter charge_per_hour\n";
  input >> j.charge_per_hour;
  return input;
}
ostream &operator << (ostream &output,job &j)
{
  output << "Job Number:" << j.job_number <<endl;
  output << "Time_to_complete_job:" << j.time_to_complete_job <<endl;
  output << "Charge_per_hour:" << j.charge_per_hour<<endl;
  return output;
}
int main()
{
  job object1,object2,object3,object4;
  cin >> object1;
  cin >> object2;
  cout << object1;
  cout << object2;
  object3=object1+object2;
  object4=object1-object2;
  object3.display();
  object4.display2();
}
