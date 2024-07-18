#include<iostream>
using namespace std;

void bubble_sort(int array[], int n){
    for (int j = 0; j < n-1  ; j++)
    { for (int i = 0; i < n- j - 1; i++)
        {
            if (array[i]> array[i+1])
            {
                swap(array[i],array[i+1]);
            }
            
        }
        
    }
    
}
int main(){
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int array[n];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    bubble_sort(array, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}