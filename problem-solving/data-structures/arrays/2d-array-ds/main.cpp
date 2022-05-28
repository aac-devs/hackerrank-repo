#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int>> arr) {
  vector<int> sums(16);
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      sums[(i * 4) + j] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] +  arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
    }
  }
  int max = sums[0];
  for(int x: sums) if(x > max) max = x;
  return max;
}

int main() {
  cout << "2D ARRAY:" << endl << endl;
  int m1 = hourglassSum({{1, 1, 1, 0, 0, 0}, 
                {1, 1, 1, 0, 0, 0},
                {0, 1, 0, 0, 0, 0}, 
                {0, 0, 2, 4, 4, 0},
                {0, 0, 0, 2, 0, 0},
                {0, 0, 1, 2, 4, 0}});
  int m2 = hourglassSum({{1, 1, 1, 0, 0, 0}, 
                {0, 1, 0, 0, 0, 0},
                {1, 1, 1, 0, 0, 0}, 
                {0, 9, 2, -4, -4, 0},
                {0, 0, 0, -2, 0, 0},
                {0, 0, -1, -2, -4, 0}});
  int m3 = hourglassSum({{-9, -9, -9, 1, 1, 1}, 
                {0, -9, 0, 4, 3, 2},
                {-9, -9, -9, 1, 2, 3}, 
                {0, 0, 8, 6, 6, 0},
                {0, 0, 0, -2, 0, 0},
                {0, 0, 1, 2, 4, 0}});

  cout << m1 << ", " << m2 << ", " << m3;

  cout << endl << endl;
  return 0;
}
