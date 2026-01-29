#include <iostream>
using namespace std;

int main()
{
  int age = 20;
  cout << age << "\n";

  double gpa = 7.8;
  cout << gpa << "\n";

  char grade = 'A';
  cout << grade << "\n";

  bool isProgrammer = true;
  cout << isProgrammer << "\n";

  // multiple variable assignment
  int a = 5, b = 6;
  cout << a + b << "\n";

  // same value to multiple variables
  int x, y, z;
  x = y = z = 10;
  cout << x << " " << y << " " << z << "\n";

  // updating variable value
  age = 21;
  cout << age << "\n";

  // constant variable
  const int minutesPerHour = 60;
  cout << minutesPerHour;

  return 0;
};