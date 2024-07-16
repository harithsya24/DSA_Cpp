#include<iostream>
using namespace std;

int linear_search(int array[], int n, int key){
    for(int i =0 ; i < n ; i++){
        if (array[i]==key)
        {
            cout<< i ;
        }
        
    }
    return -1;
}

int main(){
    int n;
    int input[n];
    int key;

    cout<<"Enter the length of an array: ";
    cin>>n;

    cout<<"Enter the array: ";
    for(int i = 0; i < n; i++){
        cin>>input[i];
    }
    
    cout<<"Enter the key: ";
    cin>>key;

    int result = linear_search(input, n, key);

    return 0;

}