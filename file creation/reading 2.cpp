#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream myfile;
    string line;
   myfile.open ("example file.txt");

   if (myfile.is_open()){
    while (getline(myfile, line)){
        cout <<line<< "\n"
    }
   
    myfile.close();
   }
   else  
    cout<< "ERROR.....!" << endl; 
   
    return 0;
}