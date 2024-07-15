//All prime numbers between a and b
#include <iostream>
using namespace std;

int main() {
    int a, b;
    

    cout << "Enter the number a: ";
    cin >> a;
    cout << "Enter the number b: ";
    cin >> b;
    for (int n = a; n <= b; n++) {
        bool prime= true;
        
        for (int i = 2; i<= n/2; i++) {
            if (n % i == 0) {
                prime = false; 
                break;
            }
        }
        if (prime==true) {
            cout << n << " ";
            

        }
    }
    
    return 0;
}
