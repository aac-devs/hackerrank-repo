#include <iostream>
using namespace std;

string digit_word(int n){
    switch (n) {
        case 0: return "o' clock";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        case 10: return "ten";
        case 11: return "eleven";
        case 12: return "twelve";
        case 13: return "thirteen";
        default: return "";
    }
}

string number_word(int n){
    string v;
    if(n == 15) return "quarter";
    if(n == 30) return "half";
    if(n == 20) return "twenty";
    if(n <= 13) v = digit_word(n);
    else if(n < 20) v = digit_word(n - 10) + "teen";        
    else v = "twenty " + digit_word(n - 20);
    return v;
}

string timeInWords(int h, int m) {
    string word;
    if(m == 15 || m == 30)
        word = number_word(m) + " past " + number_word(h);
    else if(m == 45)
        word = number_word(60 - m) + " to " + number_word(h + 1);
    else if(m == 0)
        word = number_word(h) + " " + number_word(m);
    else if(m > 30){
        if(m == 59)
            word = number_word(60 - m) + " minute to " + number_word(h + 1);
        else
            word = number_word(60 - m) + " minutes to " + number_word(h + 1);
    }else{
        if(m == 1)
            word = number_word(m) + " minute past " + number_word(h);
        else
            word = number_word(m) + " minutes past " + number_word(h);
    }
    return word;
}

int main() {
  cout << timeInWords(5, 47) << endl;
  cout << timeInWords(3, 0) << endl;
  cout << timeInWords(7, 15) << endl;
  return 0;
}
