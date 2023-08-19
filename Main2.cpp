#include <iostream>
using namespace std;

int main()
{
  int age;
  char gender;

  cout << "Enter your age: ";
  cin >> age;
  cout << "Enter your gender (M,m for male or boy, F,f for female or girl): ";
  cin >> gender;

  if (age >= 18)
  {
    cout << "You are within the legal age.\n";
  }
  else
  {
    switch (gender)
    {
    case 'M':
    case 'm':
      cout << "You are not within the legal age for boys.\n";
      break;
    case 'F':
    case 'f':
      cout << "You are not within the legal age for girls.\n";
      break;
    default:
      cout << "Invalid gender input.\n";
    }
  }
}