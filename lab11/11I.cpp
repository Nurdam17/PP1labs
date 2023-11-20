#include <bits/stdc++.h>
using namespace std;
bool isPal(string s){
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-i-1])
        {
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    do{
        if(isPal(s))
        {
            cout<<"ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    }while(next_permutation(s.begin(),s.end()));
    cout<<"JOJO";
    return 0;
}