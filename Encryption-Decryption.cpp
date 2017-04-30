/* Encryption and Decryption Code
    Author: Satyam
    Working: In this code you will get different encryptions for the same text
             This code will create 3 files after running
              i.)   Input.txt the file that you want to encrypt
              ii.)  Encrypted_Data.txt that contains the encrypted data
              iii.) Decrypted_Data.txt that contains the Decrypted data
*/
//Header files included
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>

using namespace std;

//Defined functions to be used later
void Encryption(string ,int );
void Decryption(int );

//Declaring Global Variables
fstream file;
string line,decrypted_text;

//Main program started
int main(){
    string input;

    //Creating a random number to be used in encryption
    srand((unsigned)time(0));
    int random_int = rand();

    //Opening the input file and writing text in it for encryption
    file.open("input.txt",ios :: in | ios :: out | ios :: trunc);//Opening a file
    if(!file.is_open()){                            //Checking for file
        cout<<"Error while opening the file"<<endl;
    } else {
        cout<< "Enter the data you want to Encrypt "<<endl;
        getline(cin,input);
        //writing data in input.txt
        file << input;
        //closing the file input.txt
        file.close();

        //Calling Functions
        Encryption(input,random_int);
        Decryption(random_int);

    }
    return 0;
}

//Encryption function defined
void Encryption(string input,int random_int){
    line = input;

    //Opening the Encrypted file
    file.open("Encrypted_Data.txt",ios :: in | ios :: out | ios :: trunc);
    if(!file.is_open()){
        cout << "Error while encrypting the data"<<endl;
    }else{
        cout << "Encrypted data is : ";
        for(int i = 0;i<input.length();i++){
            //Encrypting the data by increasing the ascii value of a character by a random number
            line = input.at(i) + random_int;
            cout << line;
            file << line;
        }
        file.close();

    }
}

//Decryption function definition
void Decryption(int random_int){

        fstream decrypt;
        ifstream encrypt; //Used for reading the content

        decrypt.open("Decrypted_Data.txt",ios :: in | ios :: out | ios :: trunc);
        if(!decrypt.is_open()){
        cout << "Error while encrypting the data"<<endl;
        }else{
            //Opening the Enncrypted Data from the Encryption.txt file
            encrypt.open("Encrypted_Data.txt");
            if(!encrypt.is_open()){
                cout << "Error while Decryption" << endl;
            }else{
                cout <<endl<< "Decrypted Data is : ";
                while(encrypt.good()){
                    getline(encrypt,decrypted_text);
                    for(int i=0;i<decrypted_text.length();i++){
                        /*Decrypting the data by subtracting the same random number
                         from the ascii value of encrypted data
                         */
                            line = decrypted_text.at(i) - random_int;
                            cout << line;
                            //writing into the file
                            decrypt << line;
                    }
                }
            }

        }

}
