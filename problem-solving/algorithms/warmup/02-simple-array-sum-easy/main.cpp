#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int simpleArraySum(vector<int> ar) {
  int sum = 0;
  for(int x: ar) sum += x;
  return sum;
}

int main() {
  vector<int> ar = {1, 2, 3, 4, 10, 11};
  int sum = 0;

  sum = simpleArraySum(ar);
  cout << "Sum: " << sum << endl;
  return 0;
}
