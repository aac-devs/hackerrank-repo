#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <math.h>
using namespace std;

/*
void sansaxXor(vector<int> arr) {

  int length = arr.size();
  if(length % 2 != 0){
    vector<int> cant_x_position(length);
    int size = 1;
    int step;
    while(size <= length){
      step = size;
      for(int i = 0; (i < length) && (i <= length - step); i++){
        for(int j = 0; j < step; j++){
          // cout << i + j + 1 << " ";
          cant_x_position[i + j] += 1;
        }
        // cout << endl;
      }
      // cout << endl;

      size++;
    }

    // cout << "------------------" << endl;
    vector<int> results(length);
    for(int i = 0; i < length; i++){
      if((cant_x_position[i] % 2) == 0){
        results[i] = 0;
      }else{
        results[i] = arr[i];
      }
    }

    for(int x: cant_x_position){
      cout << setw(2) << x << " "; 
    }
    // cout << endl;
    int sum = 0;
    for(int x: results){
      sum ^= x;
      // cout << setw(2) << x << " "; 
    }
    // cout << endl << "sum xor: " << sum;
    // cout << endl << "--------------------------------" << endl;
    cout << endl;
    // return 0;
  }
}

vector<int> qty_pos(int size){
  // int size = arr.size();
  int med =  size / 2 + 1;
  // cout << "size: " << size << ", med: " << med << endl;
  vector<int> a(size);
  int pow_med = pow(med, 2);
  int i = 1;
  a[med - 1] = pow_med;
  med ++;
  while(pow_med > size){
    pow_med -= i;
    a[med - 1] = pow_med;
    a[size - med] = pow_med;
    med ++;
    i += 2;
  }
  // for(int k = 0; k < size; k++){
  //   cout << setw(2) << a[k] << " ";
  // }
  // cout << endl;
  return a;
}

int sansaXor(vector<int> arr) {
  int length = arr.size();
  if(length % 2 == 0) return 0;
  vector<int> cant_x_position = qty_pos(length);
  // while(size <= length){
  //   step = size;
  //   for(int i = 0; (i < length) && (i <= length - step); i++){
  //     for(int j = 0; j < step; j++)
  //       cant_x_position[i + j] += 1;      
  //   }
  //   size++;
  // }
  int sum = 0;
  for(int i = 0; i < length; i++){
    if((cant_x_position[i] % 2) != 0)
      sum ^= arr[i];
  }
  return sum;
}*/

vector<int> qty_pos(long long int size){
  long long int med =  size / 2 + 1;
  vector<int> a(size);
  long long int pow_med = pow(med, 2);
  long long int i = 1;
  a[med - 1] = pow_med;
  med ++;
  while(pow_med > size){
    pow_med -= i;
    a[med - 1] = pow_med;
    a[size - med] = pow_med;
    med ++;
    i += 2;
  }
  return a;
}

long long int sansaXor(vector<int> arr) {
  long long int length = arr.size();
  if(length % 2 == 0) return 0;
  vector<int> cant_x_position = qty_pos(length);
  long long int sum = 0;
  for(long long int i = 0; i < length; i++){
    if((cant_x_position[i] % 2) != 0)
      sum ^= arr[i];
  }
  return sum;
}

int main() {
  cout << "SANSA AND XOR" << endl << endl;

  // sansaXor({1});
  // sansaXor({1, 22});
  cout << sansaXor({1, 2, 3}) << endl;
  cout << sansaXor({4, 5, 7, 5}) << endl;
  cout << sansaXor({98, 74, 12}) << endl;
  cout << sansaXor({50, 13, 2}) << endl;
  // sansaxXor({1});
  // sansaxXor({1, 2});
  // sansaxXor({1, 2, 3});
  // sansaxXor({1, 2, 3, 4});
  // sansaxXor({1, 2, 3, 4, 5});
  // sansaxXor({1, 2, 3, 4, 5, 6});
  // sansaxXor({1, 2, 3, 4, 5, 6, 7});
  // sansaxXor({1, 2, 3, 4, 5, 6, 7, 8});
  // sansaxXor({1, 2, 3, 4, 5, 6, 7, 8, 9});
  // sansaxXor({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
  // sansaxXor({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11});
  // sansaxXor({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12});
  // sansaxXor({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13});
  // sansaxXor({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14});
  // sansaxXor({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15});
  cout << "--------------------------------" << endl;
  // sansa({1});
  // sansa({1, 2});
  // sansa({1, 2, 3});
  // sansa({1, 2, 3, 4});
  // sansa({1, 2, 3, 4, 5});
  // sansa({1, 2, 3, 4, 5, 6});
  // sansa({1, 2, 3, 4, 5, 6, 7});
  // sansa({1, 2, 3, 4, 5, 6, 7, 8});
  // sansa({1, 2, 3, 4, 5, 6, 7, 8, 9});
  // sansa({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
  // sansa({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11});
  // sansa({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12});
  // sansa({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13});
  // sansa({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14});
  // sansa({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15});

  cout << endl;
  return 0;
}
