#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream file;
    file.open("satyam.txt");
    if(!file.is_open()){
        cout << "Error while opening the file";
    }else {
    cout << "Reading from the file"<<endl;
    string line;
    while(file.good()){
    getline(file,line);
    cout<< line << " ";
    }
    }



    return 0;
}
