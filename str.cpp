#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "dfkjhfdhfgcjghkldfjkljhdfh";
    int freq[26];
    int max = 0;
    char max_cha;

    for(int i=0; i<26; i++){
        freq[i]=0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(freq[i] > max){
            max  = freq[i];
            max_cha = 'a' +  i ;
        }
    }

    cout<< "Frequency: "<< max<<endl;
    cout<< "Character: "<< max_cha<<endl;
    
    return 0;
}