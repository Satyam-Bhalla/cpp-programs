#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file("satyam.txt",ios::in | ios::out | ios::trunc);
    if(!file.is_open()){
        cout<<"Error";
    }else{
    cout << "file opened successfully"<<endl;
    cout << "Writing to the file"<<endl;

    file<< "C++ is awesome";
    file.seekp(3);
    file << "lkfsvlekkrjbfkerj";
    cout<<"reading from the file"<<endl;
    file.seekg(0);
    string line;
    while(file.good()){
        getline(file,line);
        cout<<"\n"<<line;
    }
    }
    return 0;
}
