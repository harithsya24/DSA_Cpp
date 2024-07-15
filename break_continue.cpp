#include <iostream>
using namespace std;

int main() {
    int n, pocket = 3000;
    cout << "Enter the date: ";
    cin >> n;

    for (int date = n; date <= 31; date++) {
        if (date % 2 == 0) {
            cout <<date<<" \n - You can go out." << endl;
            pocket = pocket - 300;
            continue;
        }

        if (pocket <= 0) {
            break;
        }
        cout << "Date: " << date << " - Pocket money left: " << pocket << endl;
    }

    return 0;
}
