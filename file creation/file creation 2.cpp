#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myfile;
    myfile.open ("example file.txt");
    
    cout <<"hello my file.!" << endl; 
    myfile.close();
    return 0;
}