#include <iostream>
#include <bits/stdc++.h>
#include <bitset>
#include <iomanip>
#include <ios>
using namespace std;

long long int xorSequence(long long int l, long long int r) {
  long long int sum = 0;
  // sum = l ^ r;
  // vector<int> arr(1);
  long long int previous = 0, current = 0;
  long long int mult4 = 1, m = l;
  bool done = false;

  long long int diff = r - l;
  cout << "Dif: " << diff << ", [" << bitset<8>(diff) << "]" << endl;

  if(m > 4){
    while(!done){
      if(m % 4 == 0){
        mult4 = m;
        done = true;
      }else{
        m--;
      }
    }
  }

  for(long long int i = mult4; i <= r; i++){
    // arr.push_back(i ^ arr[i - 1]);
    // if(i >= l) sum ^= arr[i];
    current = i ^ previous;
    if(i >= l) {
      sum ^= current;
      // cout << "[" << i << "]: " << bitset<8>(current) << ", sum: " << bitset<8>(sum) << endl;
      cout << "i:(" 
          << i 
          << ")[" 
          << bitset<8>(i) 
          << "] ^ prv:(" 
          << setw(2) 
          << previous 
          << ")[" 
          << bitset<8>(previous) 
          << "] = curr:(" 
          << setw(2) 
          << current 
          << ")[" 
          << bitset<8>(current) 
          << "].. sum:(" 
          << setw(2) 
          << sum 
          << ")[" 
          << bitset<8>(sum) 
          << "]" 
          << endl;
    }
    previous = current;
  }

  // for(int x: arr){
  //   cout << x << " ";
  // }
  // cout << endl << "sum: " << sum << endl;


  return sum;
}

long long int newXorSequence(long long int l, long long int r) {
  long long int mult8, aux = r;

  bool done = false;
  if(aux > 8){
    while(!done){
      if(aux % 8 == 0){
        mult8 = aux;
        done = true;
      }else{
        aux--;
      }
    }
  }

  long long int sum = mult8;
  for(int i = mult8 + 1; i < r; i++){
    sum ^= i;
  }


  return sum;

}

int main() {
  cout << "XOR SEQUENCE" << endl << endl;

  // cout << xorSequence(2, 4) << endl;
  // cout << xorSequence(2, 8) << endl;
  // cout << xorSequence(5, 9) << endl << endl;

  // cout << xorSequence(3, 5) << endl;
  // cout << xorSequence(4, 6) << endl;
  // cout << xorSequence(15, 20) << endl;

  long long int x;
  x = xorSequence(2, 4);
  cout << endl;
  x = xorSequence(2, 8);
  cout << endl;
  x = xorSequence(5, 9);
  cout << endl;
  
  x = xorSequence(3, 5);
  cout << endl;
  x = xorSequence(4, 6);
  cout << endl;
  x = xorSequence(2, 20);

  // cout << newXorSequence(2, 4) << endl;
  // cout << newXorSequence(2, 8) << endl;
  // cout << newXorSequence(5, 9) << endl << endl;
  // cout << newXorSequence(3, 5) << endl;
  // cout << newXorSequence(4, 6) << endl;
  // cout << newXorSequence(15, 20) << endl;


  // cout << xorSequence(638621066001121, 907368627742749) << endl;
  // x = xorSequence(638621066001121, 907368627742749);

  cout << endl;
  return 0;
}
