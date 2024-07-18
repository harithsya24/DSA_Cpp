#include<iostream>
using namespace std;

void insertion_sort(int array[], int n){
    for(int i =1; i < n; i++){
        int key = array[i];
        int j = i - 1;
        while (j>= 0 && array[j]>key)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
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

    insertion_sort(array, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}