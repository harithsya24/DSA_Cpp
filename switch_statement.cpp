#include<iostream>
using namespace std;

int main(){
    char n;
    cout<<"Enter a number between A to E: ";
    cin>>n;
    switch (n)
    {
    case 'A':
        cout<<"Hey!";
        break;
    case 'B':
        cout<<"Namaste!";
        break;
    case 'C':
        cout<<"Namaskara!";
        break;
    case 'D':
        cout<<"Ciao";
        break;
    case 'E':
        cout<<"Sault";
        break;
    default:
        cout<<"Invalid Option.";
        break;
    }
}