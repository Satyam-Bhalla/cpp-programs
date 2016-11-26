#include<iostream>
#include<fstream>//Header filefor file operations
using namespace std;
int main(){
    ofstream file("abc.txt");//creating ofstream object and creating file abc.txt
    if(!file.is_open()){                //Checking for file
        cout<< "File not opened";
    } else {
    file << "Computer"<<endl; //writing into the file using stream object file
    file<< "is a dumb machine."<<endl;
    file.close(); //closing the file
    cout<< "Sucessfully written to the file"<<endl;
    }
    return 0;

}
