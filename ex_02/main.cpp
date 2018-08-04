#include <iostream>
using namespace std;

extern void sh_func1();

int main() {

  cout << "main" << endl;

  sh_func1();

  return 0;
}
