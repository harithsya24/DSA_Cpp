#include<iostream>
using namespace std;

void search_mat(int a[100][100], int n, int m,int key){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == key)
            {
                cout<< i <<" "<<j;
                return;
            }
        }
    }
    cout << "Key not found.";
    cout << endl;
    
}

int main(){
    int a[100][100];
    int n,m,key;
    cout<<"Enter n: ";
    cin >> n;
    cout<<"Enter m: ";
    cin >> m;
    cout<<"Enter A: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<<"Enter key: ";
    cin >> key;

    search_mat(a, m, n, key);
    return 0;
}