#include <iostream>
using namespace std;

int main()
{
  string name = "";
  int age = 0;
  string occup = "";
  cout << "Please enter your Name.";
  cin >> name;
  cout << "Please enter your Age.";
  cin >> age;
  cout << "Please enter your Occupation.";
  cin >> occup;
  age += 1;
  cout << "Thank you for using our application, " << name << " and I hope your career in " << occup << " is successful.";
  cout << "Hope your " << age << "nd birthday is enjoyable and exciting!";

  return 0;
}
