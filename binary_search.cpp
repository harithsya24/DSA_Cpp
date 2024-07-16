#include<iostream>
using namespace std;

int binary_search(int array[], int n, int key){
    for (int  i = 0; i < n; i++)
    {
        int s=0;
        int e=n;
        while (s <= e){
            int mid = (s+e)/2;
            if (array[mid]==key)
            {
                return mid;
            }
            else if (array[mid]<key)
            {
                s = mid + 1;
            }
            else{
                e = mid -1 ;
            }   
        }
    }
    return -1;    
}

int main(){
    int n;
    int key;
    int input[n];

    cout<<"Enter the length of an array:";
    cin >> n;

    cout<<"Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    cout<<"Enter the key: ";
    cin >> key;

    int result = binary_search(input, n, key);
    cout<< result;
    return 0;
}