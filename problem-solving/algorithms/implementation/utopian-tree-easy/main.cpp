#include <iostream>
using namespace std;

int utopianTree(int n) {
  //si el periodo es par, se duplica el height, si es impar aumenta en uno.
  int height = 1;
  int period = 0;
  while(period < n){
    if(period == 1) height++;
    else{
      if((period % 2) == 1) height++;
      else height = height + height;
    }
    period++;
  }
  return height;
}

int main() {
  cout << "UTOPIAN TREE" << endl << endl;
  cout << utopianTree(0) << endl;
  cout << utopianTree(1) << endl;
  cout << utopianTree(4) << endl;
  cout << utopianTree(3) << endl;
  cout << endl;
  return 0;
}
