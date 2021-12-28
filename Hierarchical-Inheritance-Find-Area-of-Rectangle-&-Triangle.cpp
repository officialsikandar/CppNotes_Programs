#include <iostream>
using namespace std;
class Shape {
    //protected member
    protected:
        float width, height;

    //public members
    public:
        void setvalues(float w, float h) 
        {
            cout << "Setting the Dimensions using the parent Class: Shape\n";
            cout << "The dimensions are: " << w << " and " << h << "\n\n";

            width = w;
            height = h;
        }
};

//Class Rectangle inherites the Shape class
class Rectangle: public Shape 
{
    public: 
        float area() 
        {
        return (width * height);
        }
};

//Class Triangle inherites the Shape class
class Triangle: public Shape 
{
    public: 
        float area() 
        {
        return (width * height / 2);
        }   
};

//Defining the main method to access the members of the class
int main() 
{
    cout << "\n\n ============  Welcome to officialsikandar Git-Hub Account  =========== \n";
    cout << " ==================  Find Area & Volume of a Cuboid  ================== \n";
    Rectangle rect;                     //Declaring the Class objects
    Triangle tri;                       //Declaring the Class objects
    double tw,th;                       //Varible Declaring for Input from user
    cout<<"Enter Triangle Width and Height\n";
    cin>>tw>>th;                        //Take Values from user
    rect.setvalues(tw, th);             //pasing values to rectangle
    tri.setvalues(tw, th);              //pasing values to triangle
    cout << "\n";
    cout << "********************************************************************\n\n";
    cout << " =============  Welcome to officialsikandar Git-Hub Account  ============= \n";
    cout << " ==================  Find Area of Rectangle & Triangle  ==================\n\n";
    cout << "********************************************************************\n";
    cout << "\nArea of the Rectangle\t||\t" <<"Area of the Triangle"<< "\n\n";
    cout <<"\n"<<rect.area()<<"\t\t\t||\t"<<tri.area()<< "\n\n";
    cout << "********************************************************************\n";

    return 0;
}
