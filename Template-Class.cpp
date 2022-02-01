#include <iostream>  
using namespace std;  
// template<class T>  
// class A   
// {  
//     public:
//     T x=10.9;
//     T print()
//     {
//         cout<<x<<endl;
//         return 0;
//     }
// };  
  
// int main()  
// {  
//     A <float> obj;
//     obj.print();
// }  

template<class T1, class T2, class T3>  
class A   
{  
    public:
    T1 x;
    T2 y;
    T3 z;
    A(T1 a, T2 b, T3 c)
    {
        x=a;
        y=b;
        z=c;
    }
    void print()
    {
        cout<<x<<"\t"<<y<<"\t"<<z<<endl;
    
    }
};  
  
int main()  
{  
    A <string,float,int> obj("Hello String",1.10,1001);
    obj.print();
}  
