#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "skjdfgkdjg";
    string upper, lower;
    //uppercase
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    cout << str<<endl;

    //lowercase
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout << str;
    return 0;
}