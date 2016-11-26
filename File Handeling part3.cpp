#include<iostream>
#include<fstream> // Header file for file operations
using namespace std;
int main(){
    ifstream file;//creating ifstream object for reading file
    file.open("abc.txt");//opening file
    if(!file.is_open()){        //checking file
        cout << "Error while opening the file";
    }else {
    cout << "Reading from the file"<<endl;
    string line; //string type variable
    while(file.good()){ //to check whether the operations on the file are not producing any error
    getline(file,line); //copying the file object data into line variable
    cout<< line << " "; //Displaying the result
    }
    }
    return 0;
}
