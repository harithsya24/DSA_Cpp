#include<iostream>
using namespace std;


int getBit(int n,int i){
    return ((n & (1<<i)) != 0);
}
int setBit(int n,int i){
    return ((n  | (1<<i)) != 0);
}
int clearBit(int n, int i){
    return((n  &~ (1<<i)) !=0);
}
int updateBit(int n, int i, int value){
    int mask =~(1<<i);
    n = n & mask;
    return (n | (value<<i));
}
int main(){
    cout<<getBit(5, 1)<<"\t";
    cout<<endl;

    cout<<setBit(5, 1)<<endl;
    cout<<clearBit(5,1)<<endl;
    cout<<updateBit(5,1,1)<<endl;
    return 0;
}