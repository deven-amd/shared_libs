#include <iostream>
using namespace std;

extern void sh_func1();

int main() {
  cout << "entering main" << endl;


  cout << "calling sh_func1 from main" << endl;
  sh_func1();

  cout << "return from main" << endl;
  return 0;
}

__attribute__((constructor))
static void initial_func1() {
  cout << "initial_func1 from main.cpp" << endl;
}

__attribute__((destructor))
static void final_func1() {
  cout << "final_func1 from main.cpp" << endl;
}
