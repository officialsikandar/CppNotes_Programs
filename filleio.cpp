#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// int main()
// {
//     //create a string for writhing in file.
//     string st="Hello sikandar";

//     //create an object of ofstream class  ,,,,    opening file using construction of ofstream class and Writing it.   
//     ofstream obj("file.txt");           //(File name which you want to write).
//     obj<<st;                            //object name << string name which you want to enter in file.
//     obj.close();
//     return 0;
// }


                                    // int main()
                                    // {
                                    //     //create a string for Reading in file.
                                    //     string st2;
                                    //     //create an object of ofstream class  ,,,,    opening file using construction of ofstream class and Reading it.
                                    //     ifstream inn("file.txt");               //(File name which you want to Read).
                                    //    // inn>>st2;                               //object name >> string name which Read data from file.
                                    //     //cout<<st2<<endl;                        //print string (((((but is only read the first Word of Your File))))).
                                    //     getline(inn, st2);                       //'getline'  is a keyword which use to get ful line from file. 
                                    //     cout<<st2<<endl;                        //print string (((((It read the full line of Your File))))).
                                    //     inn.close();
                                    //         return 0;
                                    // }

int main()
{
    //create a string for Reading in file.
    string st;
    //create an object of ofstream class  ,,,,    opening file using construction of ofstream class and Reading it.
    ifstream sout;
    sout.open("file.txt");               //(File name which you want to Read).
    while(sout.eof()==0)                 //(Loop run from start end of file).   
    {
    getline(sout,st);
    cout<<st<<endl;
    }
    sout.close();                       //close the file.
    return 0;
}
