#include <iostream>
using namespace std;
class Shape {
    protected:                                                                  //protected member
        float width, height;
    public:                                                                     //public members
        void setvalues(float w, float h) 
        {
            width = w;
            height = h;
        }
};
class Rectangle: public Shape                                                   //Class Rectangle inherites Shape class
{
    public: 
        float area() 
        {
        return (width * height);
        }
};
class Triangle: public Shape                                                    //Class Triangle inherites Shape class
{
    public: 
        float area() 
        {
        return (width * height / 2);
        }   
};
int main()
{
    cout << " =============  Welcome to officialsikandar Git-Hub Account  ============= \n";
    cout << " ==================  Find Area of Rectangle & Triangle  ==================\n\n";
    Rectangle rect;                                                             //Declaring the Class objects
    Triangle tri;                                                               //Declaring the Class objects
    double tw,th;                                                               //Varible Declaring for Input from user
    cout<<"Enter Triangle Width and Height\n";
    cin>>tw>>th;                                                                //Take Values from user
    rect.setvalues(tw, th);                                                     //pasing values to rectangle
    tri.setvalues(tw, th);                                                      //pasing values to triangle
    cout << "\n";
    cout << "==========================================================================\n\n";
    cout << " =============  Welcome to officialsikandar Git-Hub Account  ============= \n";
    cout << " ==================  Find Area of Rectangle & Triangle  ==================\n\n";
    cout << "==========================================================================\n";
    cout << "Area of the Rectangle\t||\t" <<"Area of the Triangle"<< "";
    cout <<"\n"<<rect.area()<<"\t\t\t||\t"<<tri.area()<< "\n";                //Output Area of Triangle & Rectangle
    cout << "==========================================================================\n\n";
    return 0;
}
