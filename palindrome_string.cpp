#include<iostream>
using namespace std;



int main(){
    bool pal = false;
    int n;
    cout<<"n: ";
    cin >> n;
    char arr[n+1];
    cin >> arr;
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i]==arr[n-1-i])
            {
                pal = true;
            }
        else{
            pal = false;
            break;
        }
        }
    
    if (pal == true)
    {
        cout<<"Yes palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}
    
    
    
    
    
    
    