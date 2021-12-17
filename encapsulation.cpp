#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setS(int s) {
      salary = s;
    }
    // Getter
    int getS() {
      return salary;
    }
};

int main() {
  Employee myObj;
  int n;
  cout<<"Enter Salary of a imployee:  ";
  cin>>n;
  myObj.setS(n);
  cout << myObj.getS();
  return 0;
}
