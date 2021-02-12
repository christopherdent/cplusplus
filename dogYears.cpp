#include <iostream>
using namespace std;

int main() {

  int dog_age;
//this version of the program is only for dogs older than two years old.
  int early_years;
  int later_years;
  int human_years;
  string dog_name;

cout << "Enter dog name: \n";

cin >> dog_name;

cout << "Enter dog age: \n";

cin >> dog_age;

early_years = 21;

later_years = (dog_age - 2) * 4;

human_years = early_years + later_years;


cout << "My name is " << dog_name << "! Woof woof, I am " << human_years << " years old in human years.\n";

return 0;

}
