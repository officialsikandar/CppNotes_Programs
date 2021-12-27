#include <iostream>

using namespace std;

//Class Volume to compute the Volume of the Cuboid
class Volume {
    public:
        float volume(float l, float b, float h) {
            return (l * b * h);
        }
};

//Class Area to compute the Volume of the Cuboid
class Area {
    public:
        float area(float l, float b, float h) {
            return (2 * (l * b + b * h + h * l));
        }
};

//Cuboid class inherites or is derived from two different classes Volume and Area.
class Cuboid: private Volume, private Area {
    private: float length,
    breadth,
    height;

    //Default Constructor of the Cuboid Class
     public: 
    void getDimensions() {
        cout << "\nEnter the length of the Cuboid: ";
        cin >> length;

        cout << "\nEnter the breadth of the Cuboid: ";
        cin >> breadth;

        cout << "\nEnter the height of the Cuboid: ";
        cin >> height;
      
    }

    //Method to Calculate the area of the Cuboid by using the Area Class
    float volume() {
        //Calls the volume() method of class Volume and returns it.
       
      return Volume::volume(length, breadth, height);
    }

    //Method to Calculate the area of the Cuboid by using the Area Class
    float area() {
        //Calls the area() method of class Area and returns it.
        return Area::area(length, breadth, height);    }
};

//Defining the main method to access the members of the class
int main() {

    cout << "\n\n ============  Welcome to officialsikandar Git-Hub Account  =========== \n";
    cout << " ==================  Find Area & Volume of a Cuboid  ================== \n";

    //Declaring the Class objects to access the class members
    Cuboid cuboid;
    cuboid.getDimensions();
    cout << "\n";
    cout << "********************************************************************\n\n";
    cout << " ============  Welcome to officialsikandar Git-Hub Account  =========== \n";
    cout << " ==================  Find Area & Volume of a Cuboid  ==================\n\n";
    cout << "********************************************************************\n";
    cout << "\nArea of the Cuboid\t||\t" <<"Volume of the Cuboid"<< "\n\n";
    cout <<"\n"<<cuboid.area()<<"\t\t\t||\t"<<cuboid.volume()<< "\n\n";
    cout << "********************************************************************\n";

    return 0;
}
