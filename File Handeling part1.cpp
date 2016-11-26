#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    file.open("satyam.txt",ios :: in | ios :: out | ios :: trunc);
    if(!file.is_open()){
        cout<<"Error while opening the file"<<endl;
    } else {
        cout<< "File opened successfully";
        file.close();
    }

 return 0;
}

