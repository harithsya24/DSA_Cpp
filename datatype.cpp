#include <iostream>
using namespace std;

int main(){
    int a=12;
    float b;
    b = 22/7;
    char C;
    bool D;
    cout<<"size of int \n"<<sizeof(a)<<endl;
    cout<<"size of float"<<sizeof(b)<<endl;
    cout<<"size of char \n"<<sizeof(C)<<endl;
    cout<<"size of boo \n"<<sizeof(D)<<endl;

    short int si;
    long long int li;
    cout<<"size = "<<sizeof(si)<<endl;
    cout<<"size = "<<sizeof(li)<<endl;


    return 0;
}