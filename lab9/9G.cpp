#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> v;
    for(char i : s)
    {
        v.push_back(i);
    }
    for(int j=0;j<s.length();j++)
    {
        if(v[j]=='1' && v[j+1]=='1')
        {
            j++;
            continue;
        }
        else
        {
            cout<<v[j];
        }
    }
    
    return 0;
}