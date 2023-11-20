#include <bits/stdc++.h>
using namespace std;
bool isprime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    int a;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]<0)
        {
            v[i]=-v[i];
        }
    }
    
    for(int i : v)
    {
        if(isprime(i))
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}