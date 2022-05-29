#include <iostream>
using namespace std;

long long int repeatedString(string s, long long int n) {
  // si "s" solo contiene una "a", s.size(1) --> "a", devuelve n:
  if(s == "a") return n;
  // si el tamaño de "s" es 1 pero no es "a", devuelve 0:
  long long int size = s.size();
  if(size == 1) return 0;
  long long int aes{0};
  // se cuentan las a'es de la cadena "s"
  for(int c: s) if(c == 'a') aes++;
  // se divide "n" entre el tamaño de la cadena "s", además se obtiene su módulo
  long long int div = n / size;
  long long int mod = n % size;
  // se cuentan las a'es en la cadena "s" hasta el index == módulo
  long long int sum = 0;
  for(int i = 0; i < mod; i++) if(s[i] == 'a') sum++;
  // por último, se suman las a'es del resto con las que se contaron de la cadena "s" multiplicadas por "div"
  sum += (aes * div);
  return sum;
}

int main() {
  cout << "REPEATED STRING" << endl << endl;
 
  cout << repeatedString("aba", 10) << endl;
  cout << repeatedString("a", 1000000000000) << endl;
  cout << repeatedString("ebcdddafdfeffaddbceddebafbbebebbbcefcbcdfbaabecfaaeeaaffdfccffbdeeaabcfeecfcecbfebacefebdfaeedadebdf", 561984209086) << endl;
  cout << repeatedString("beeaabc", 711560125001) << endl;
  cout << repeatedString("b", 590826798023) << endl;

  cout << endl;
  return 0;
}
