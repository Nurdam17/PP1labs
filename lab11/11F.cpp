#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k;
    cin>>a>>b>>k;
    vector<int> v1;
    vector<int> v2;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            v1.push_back(i);
        }
    }
    for(int j=1;j<=b;j++)
    {
        if(b%j==0)
        {
            v2.push_back(j);
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    vector<int> v;
    int i=0,j=0;
    while(i<v1.size() && j<v2.size())
    {
        if(v1[i]==v2[j])
        {
            v.push_back(v1[i]);
            i++;
            j++;
        }
        else if(v1[i]>v2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    reverse(v.begin(),v.end());
    cout<<v[k-1];
    return 0;
}