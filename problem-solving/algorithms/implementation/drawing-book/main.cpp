#include <iostream>
using namespace std;

int pageCount(int n, int p) {
    if(p == 1) return 0;
    if(p == n) return 0;
    if(((n % 2) == 0) && (p == (n - 1))) return 1;
    if(p == (n - 1)) return 0;
    int count = 0;
    int i = 1, j;
    if((n % 2) == 0) j = n;
    else j = n - 1;
    while((i < p) && (j > p)){
        i += 2;
        j -= 2;
        count++;
    }
    return count;
}

int main() {
  cout << "DRAWING BOOK" << endl << endl;
  cout << pageCount(6, 2) << endl;
  cout << pageCount(5, 4) << endl;
  cout << endl;
  return 0;
}
