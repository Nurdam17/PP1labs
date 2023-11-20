#include <bits/stdc++.h>
using namespace std;
void bin(int num){
    char c;
    string s;
    if(num==0)
    {
        s="0";
    }
    while(num!=0)
    {
        c=num%2+48;
        s+=c;
        num/=2;
    }
    for(int i=0;i<s.length()/2;i++)
    {
        swap(s[i],s[s.length()-i-1]);
    }
    cout<<s<<'\n';
}
int main(){
    int num;
    cin>>num;
    vector<int> v;
    int a;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for_each(v.begin(),v.end(),bin);
    return 0;
}