#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    ofstream file("satyam.txt");
    if(!file.is_open()){
        cout<< "File not opened";
    } else {
    file << "Sanyam"<<endl;
    file<< "is an idiot"<<endl;
    file.close();
    cout<< "Sucessfully written to the file";
    }

    return 0;

}
