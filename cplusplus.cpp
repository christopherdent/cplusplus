#include<iostream>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
  using namespace std::this_thread; // sleep_for, sleep_until
  using namespace std::chrono; // nanoseconds, system_clock, seconds

string name;

  cout<<"Hello World!\n";

  cout<<"What's your name?\n";

  cin>>name;

  cout<<"It is nice to meet you " << name << ". I am C++, remember me?";
  cout<<"\n";
     sleep_for(nanoseconds(10));
     sleep_until(system_clock::now() + seconds(2));



  cout<< "Of course you do.  It is so good to see you again, " << name << ". Let's play!";
    cout<<"\n";
  return 0;
}
