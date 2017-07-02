#include<iostream>

using namespace std;

int main(){
    // Declaring variables
    char a[20];
    char temp;
    char a2[20];
    char store;
    int result=0;
    int j=0;

    //Taking input from string
    cout << "Enter a string : ";
    cin >> a;

    //SSorting using bubble sort
    for(int i=0;a[i]!='\0';i++){
        for(int j=0;a[j]!='\0';j++){
            if(a[i]<a[j]){
              temp = a[i];
              a[i] = a[j];
              a[j] = temp;
            }
        }
    }

    //Type casting digit characters to convert them in int
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>=48 && a [i]<=57){
            store = a[i]; //storing the digit in the charcater form
            result += (int)store - (int)48; // conversting 48 to 0,49 to 1 and so on
        }
    }


    // Removing the digits from the sorted input and storing that in another string
    for(int i=0;a[i]!='\0';i++){
        if(!(a[i]>=48 && a[i]<=57)){
            a2[j] = a[i];
            j++;
        }
    }


    //Showing the output
    for(int i=0;i<j;i++){
        cout << a2[i] << " ";
    }
    cout << result;
}
