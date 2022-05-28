#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
  vector<int> new_grades(grades.size());
  int ceil;
  for(int i = 0; i < grades.size(); i++){
    if((grades[i] % 5 != 0) && grades[i] >= 38){
      ceil = (grades[i] / 5 + 1) * 5;
      if((ceil - grades[i]) < 3) new_grades[i] = ceil;
      else new_grades[i] = grades[i];
    }else new_grades[i] = grades[i];
  }
  return new_grades;
}

int main() {
  cout << "GRADING STUDENTS:" << endl;
  vector<int> gr1 = gradingStudents({73, 67, 38, 33});
  for(int x: gr1) cout << x << endl;
  return 0;
}
