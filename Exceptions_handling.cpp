#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted";
    } else {
      throw (age);
    }
  }
  catch (int num) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << num;  
  }
  
  

// double division(int a, int b) {
//    if( b == 0 ) {
//       throw "Division by zero condition!";
//    }
//    return (a/b);
// }

// int main () {
//    int x = 50;
//    int y = 5;
//    double z = 0;
 
//    try {
//       z = division(x, y);
//       cout << z << endl;
//    } catch (const char* msg) {
//      cerr << msg << endl;
//    }

//    return 0;
// }
