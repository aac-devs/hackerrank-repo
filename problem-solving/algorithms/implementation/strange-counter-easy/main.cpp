#include <iostream>
#include <math.h>
using namespace std;

long strangeCounter(long t) {
  long max = 0;
  int i = 0;
  while(max <= (t + 2)){
    max = 3 * pow(2, i);
    i++;
  }
  // long tmax = ;
  // long x = (max - 2) - t;
  // cout << "t: " << t << endl;
  // cout << "max: " << max << endl;
  // cout << "tmax: " << tmax << endl;
  // cout << "x: " << x << endl;

  return (max - 2) - t;
}

int main() {
  cout << "STRANGE COUNTER" << endl << endl;

  cout << "val: " << strangeCounter(1) << endl;
  cout << "val: " << strangeCounter(2) << endl;
  cout << "val: " << strangeCounter(3) << endl;
  cout << "val: " << strangeCounter(4) << endl;
  cout << "val: " << strangeCounter(5) << endl;
  cout << "val: " << strangeCounter(6) << endl;
  cout << "val: " << strangeCounter(7) << endl;
  cout << "val: " << strangeCounter(8) << endl;
  cout << "val: " << strangeCounter(9) << endl;
  cout << "val: " << strangeCounter(10) << endl;
  cout << "val: " << strangeCounter(11) << endl;
  cout << "val: " << strangeCounter(44) << endl;
  cout << "val: " << strangeCounter(45) << endl;
  cout << "val: " << strangeCounter(46) << endl;
  cout << "val: " << strangeCounter(47) << endl;
  cout << "val: " << strangeCounter(48) << endl;

  cout << endl;
  return 0;
}
