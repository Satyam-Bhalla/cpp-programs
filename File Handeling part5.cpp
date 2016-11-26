#include<iostream>
#include<fstream> // Header file for file operations
using namespace std;
int main(){
    ifstream file("abc.txt",ios::in);//opening file in in mode
    if(!file.is_open()){ //Checking file
        cout << "error";
    } else {
    cout << file.tellg()<<endl; //check the position of get pointer
    string line;
    file.seekg(0); //making the position of get pointer to 0 to read the file
    getline(file,line); //copying data into line variable
    cout << line<<endl;
    file.close(); //closing file
    }
    /*####################################*/
    ofstream myfile("abc.txt",ios::out); //creating ofstream object in out mode to write data
    if(!myfile.is_open()){ //checking file
        cout << "error";
    } else {
        cout << myfile.tellp()<<endl; //checking the position of put pointer
        myfile << "C++ is good"; // writing into file
        cout<< myfile.tellp()<<endl; //checking the put pointer
        myfile.seekp(5); //Moving  the put pointer to the 5th position
        myfile << "c++ is awesomskdfjfbjsoe";
        cout<< myfile.tellp()<<endl;//checking the put pointer
    }

    return 0;
}
