#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int stickLenght(vector<int> arr){
    int min = 1000;
    for(int x: arr){
        if(x != 0) if(x < min) min = x;
    }
    return min;
}

vector<int> cutTheSticks(vector<int> arr) {
    vector<int> sticks;
    int count, min;
    do{
        count = 0;
        min = stickLenght(arr);
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > 0){
                count++;
                arr[i] = arr[i] - min;
            }
        }
        if(count != 0) sticks.push_back(count);
    }while(count != 0);
    return sticks;
}

int main() {
  vector<int> arr1 = {5, 4, 4, 2, 2, 8};
  vector<int> arr2 = {1, 2, 3, 4, 3, 3, 2, 1};
  vector<int> res1 = cutTheSticks(arr1);
  vector<int> res2 = cutTheSticks(arr2);
  for(int x: res1) cout << x << endl;
  cout << endl;  
  for(int x: res2) cout << x << endl;
  return 0;
}
