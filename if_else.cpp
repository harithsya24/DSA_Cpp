#include<iostream>
using namespace std;

int main(){
    int savings;
    cout<<"Enter the savings:";
    cin>>savings;
    if (savings < 100)
    {
        cout<<"I will have Pie only :(";
    }
    else if (savings < 500)
    {
        cout<<"I will have Pizza only!!";
    }
    
    else
    {
        cout<< "Now, I will have Biryani and Pizza, XD";
    }
    return 0;
}