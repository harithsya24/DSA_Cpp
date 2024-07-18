#include<iostream>
using namespace std;

void selection_sort(int array[], int n){
    for (int j = 0;j < n; j++)
    {
        int min = j;
    for (int i = j + 1; i < n; i++)
    {
        if (array[i]< array[min])
        {
            min = i;
        }
        
    }
    if (min != j) {
            swap(array[j], array[min]);
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

    selection_sort(array, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}