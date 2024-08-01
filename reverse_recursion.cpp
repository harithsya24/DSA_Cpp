#include <iostream>
#include<string>
using namespace std;

void reverse(string s){
    if (s.length==0){
        return;
    }
    string rev = reverse(s.substr(1));
    return rev;
    cout<< s[0];
}

int main()
{
    reverse("binod");

    return 0;
}