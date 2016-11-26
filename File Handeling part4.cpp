#include<iostream>
#include<fstream>// Header file for file operations
using namespace std;
int main()
{
    fstream file("abc.txt",ios::in | ios::out | ios::trunc);//Opening the file in (in,out or trunc mode)
    if(!file.is_open()){
        cout<<"Error";
    } else {
    cout << "file opened successfully"<<endl;
    cout << "Writing to the file"<<endl;

    file<< "C++ is awesome";
    file.seekp(3); //taking the put pointer to 3rd position for writing data into file
    file << "abcdef";
    cout<<"reading from the file"<<endl;
    file.seekg(0); //Taking the get pointer to 0th position
    string line;
    while(file.good()){
        getline(file,line); //copying data of file object into line variable
        cout<<"\n"<<line;
            }
    }
    return 0;
}
