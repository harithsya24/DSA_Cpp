#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore(); 
    char arr[n+1];
    cin.getline(arr, n+1); 

    int i = 0;
    int curr = 0, max = 0;
    int st = 0, max_st = 0; 15
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (curr > max)
            {
                max = curr;
                max_st = st;
            }
            curr = 0;
            st = i + 1;
        }
        else
        {
            curr++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << "Length of the longest word: " << max << endl;
    cout << "Longest word: ";
    for (int i = 0; i < max; i++)
    {
        cout << arr[max_st + i];
    }
    cout << endl;

    return 0;
}
