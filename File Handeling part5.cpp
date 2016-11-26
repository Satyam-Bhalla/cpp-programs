#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("satyam.txt",ios::in);
    if(!file.is_open()){
        cout << "error";
    } else {
    cout << file.tellg()<<endl;
    string line;
    file.seekg(0);
    getline(file,line);
    cout << line<<endl;
    file.close();
    }
    /*####################################*/
    ofstream myfile("satyam.txt",ios::out);
    if(!myfile.is_open()){
        cout << "error";
    } else {
        cout << myfile.tellp()<<endl;
        myfile << "C++ is good";
        cout<< myfile.tellp()<<endl;
        myfile.seekp(5);
        myfile << "c++ is awesomskdfjfbjsoe";
        cout<< myfile.tellp()<<endl;
    }

    return 0;
}
