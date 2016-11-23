#include <algorithm>
#include <iostream>
#include <string>
#include<time.h>
using namespace std;

int main()
{
    static const char alphanum[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*abcdefghijklmnopqrstuvwxyz1234567890";
    system("cls");
    string str,shuffle;
    cout << "Please enter a  word: "; //ask for input
    cin >> shuffle;
    str=shuffle;
    random_shuffle(shuffle.begin(), shuffle.end());
   // cout << shuffle << '\n';
    srand((unsigned)time(0));
    string i;
    i = alphanum[rand() % shuffle.length()];
    shuffle +=i;
    random_shuffle(shuffle.begin(),shuffle.end());
    //cout<<shuffle;
    cout << "The first string is ="<<str<<endl;
    cout << "After shuffling the sring ="<<shuffle<<endl;
    cout<<i;
    int x;
    x = shuffle.find_first_of(i);
    cout<<endl<<x+1;
    return 0;
}
