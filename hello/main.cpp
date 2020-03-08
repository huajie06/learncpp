
#include <iostream>
using namespace std;

int addbunch(int a, int b) {
    int ret;
    ret = a + b;
    return ret;
}

int maxx(int num1, int num2) {
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result;
}


int main () {
    int a = 2; // this is called `copy initialization`
    int b(4); // this is `direct initialization`, some complex case this is more efficient
    
    cout << b;
    cout << "\n";
    cout << a << endl;
    return 0;
}
