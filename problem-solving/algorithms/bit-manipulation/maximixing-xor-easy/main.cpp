#include <iostream>
using namespace std;

int maximizingXor(int l, int r) {
  int max = 0;
  for(int i = l; i <= r; i++){
    for(int j = i; j <= r; j++)
      if((i xor j) > max) max = i xor j;
  }
  return max;
}

int main() {
  cout << "MAXIMIZING XOR" << endl;
  cout << maximizingXor(10, 15) << endl;
  cout << maximizingXor(11, 100) << endl;
  return 0;
}
