#include <iostream>
using namespace std;
template <class T> 
T add(T a, T b)
{
    return a+b;
}
template <class T>
T sub(T a, T b)
{
    return a-b;
}
template <class T>
T str(T a)
{
    return a;
}
int main()
{
    
    // cout<<"Enter 2 values:  "<<endl;;
    // cin>>a>>b;
    cout<<"Addition is : "<<add(2.2,2.6)<<endl;
    cout<<"Addition is : "<<sub(10,6)<<endl;
    cout<<"Addition is : "<<str("Hello String")<<endl;

    return 0;
}
