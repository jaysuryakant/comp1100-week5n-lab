#include<iostream>
#include<math.h>
#include <fstream>
using namespace std;
int main()
{
ofstream myfile;
myfile.open("j1.txt");
myfile << "our triangle has 3 sides that are 5cm, 3cm and 5.83 cm.\n ";
myfile.close();


int a =5, b= 3;
auto x= sqrt (pow(a,2) + pow (b,2));

cout << pow(a,2) << endl;
cout << pow(b,2) <<endl; 
cout << sqrt (pow(a,2) + pow(b,2)) << endl;
return 0;
}
