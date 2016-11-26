//Program to open a file if existing or to make a new file
#include<iostream>
#include<fstream>//Header file for file operations
using namespace std;
int main(){
    fstream file;//creating stream object
    file.open("abc.txt",ios :: in | ios :: out | ios :: trunc);//Opening a file
    if(!file.is_open()){                            //Checking for file 
        cout<<"Error while opening the file"<<endl;
    } else {
        cout<< "File opened successfully";
        file.close(); //closing file
    }
    return 0;
}

