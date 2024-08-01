#include <iostream>
#include <string>
using namespace std;

void tower_of_hanoi(int n, char src, char dest, char help){
    
    if(n==0){
        return;
    }
    
    tower_of_hanoi(n-1,src,help,dest);
    cout<< "Move from "<< src <<" to "<< dest<<endl;
    tower_of_hanoi(n-1, help, dest, src);
}
int main()
{
    tower_of_hanoi(3, 'A', 'C', 'B');

    return 0;
}