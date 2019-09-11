#include <iostream>
#include <string.h>

void murcielago(char *p, int longi);
using namespace std;
int main()
{
 char arre[] = "te amo ";
 int longi = sizeof(arre);
 char *p = arre;
 murcielago(p, longi);
 system("pause");
    return 0;
}
void murcielago(char *p, int longi) {
 for (int i = 0; i < longi; i++) {
  if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'm' || *p == 'r' || *p == 'c' || *p == 'l' || *p == 'g') {
   switch (*p) {
   case 'm': cout << "0"; break;
   case 'u': cout << "1"; break;
   case 'r': cout << "2"; break;
   case 'c': cout << "3"; break;
   case 'i': cout << "4"; break;
   case 'e': cout << "5"; break;
   case 'l': cout << "6"; break;
   case 'a': cout << "7"; break;
   case 'g': cout << "8"; break;
   case 'o': cout << "9"; break;
   }
  }
  else {
   cout << *p;
  }
  *(p++);
 }
}