/*To Enter 2 strings from user and then shuffling 
and adding 1 additional random character to it and then finding that 
character and its position*/
#include <algorithm>
#include <iostream>
#include <string>
#include<time.h>
using namespace std;

int main()
{
    static const char alphanum[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*abcdefghijklmnopqrstuvwxyz1234567890";
    system("cls");
    string str,shuffle;
    cout << "Please enter a  word: "; //ask for input
    cin >> shuffle;
    str=shuffle;//copying shuffle value in str
    random_shuffle(shuffle.begin(), shuffle.end()); //shuffling the string randomly
  
    srand((unsigned)time(0));
    string i;
    i = alphanum[rand() % shuffle.length()];
    shuffle +=i;//adding the random character to string
    random_shuffle(shuffle.begin(),shuffle.end());
    //again shuffling
    cout << "The first string is ="<<str<<endl;
    cout << "After shuffling the sring ="<<shuffle<<endl;
    cout<<i;//added character
    int x;
    x = shuffle.find_first_of(i);
    cout<<endl<<x+1;//position of added character
    return 0;
}
