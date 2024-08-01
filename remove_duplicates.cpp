#include <iostream>
#include<string>
using namespace std;

string remove_dup(string s){
    if(s.length()==0){
        return "";
    }
    char ch =s[0];
    string ans = remove_dup(s.substr(1));
    if(ans.length() > 0 && ch == ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main()
{
    string result = remove_dup("aaabbbcccdddeeefff");
    cout << result << endl;
    return 0;
}