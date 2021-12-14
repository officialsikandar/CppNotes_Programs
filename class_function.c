
#include <iostream>
using namespace std;
class c
{
    public:
    // private:
    
    int a, b, add,sub,mul, divd, rem;
    int inputfun()
    {
        
        cout<<"Enter 2 Numbers::::::"<<endl;
        cin>>a>>b;
        return 0;
    }
    void addfun()
        {
            add=a+b;
            sub=a-b;
            mul=a*b;
            if(b==0)
            {
                // cout<<"Enter a Valid 2nd Number"<<endl;    
            }
            else 
            {
            divd=a/b;
            rem=a%b;
            }
        }
    void output()
    {
            if(b==0)
            {
                cout<<"Enter a Valid 2nd Number"<<endl;
            }
            else 
            {
                cout<<"Output is: "<<add<<endl;
                cout<<"Output is: "<<sub<<endl;
                cout<<"Output is: "<<mul<<endl;
                cout<<"Output is: "<<divd<<endl;
                cout<<"Output is: "<<rem<<endl;
            }        

        
    }
};

   


int main()
{
    c c1;
    int a, b;
    // cout<<"Enter 2 Numbers::::::"<<endl;
    // cin>>c1.a>>c1.b;
    c1.inputfun();
    c1.addfun();
    c1.output();
    return 0;
}
