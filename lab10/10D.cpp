#include <bits/stdc++.h>
using namespace std;
bool cmp(vector<int> a,vector<int> b){
    int sum1=0;
    int sum2=0;
    for(int i=0;i<a.size();i++)
    {
        sum1+=a[i];
    }
    for(int j=0;j<b.size();j++)
    {
        sum2+=b[j];
    }
    if(sum1!=sum2)
    {
        return sum1<sum2;
    }
    // else
    // {
    //     if(a.size()!=b.size())
    //     {
    //         return a.size()<b.size();
    //     }
    //     else
    //     {
    //         for(int i:a)
    //         {
    //             for(int j:b)
    //             {
    //                 if(i!=j)
    //                 {
    //                     return i<j;
    //                 }
    //             }
    //         }
    //     }
    // }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        vector<int> d;
        int a;
        for(int j=0;j<m;j++)
        {
            cin>>a;
            d.push_back(a);
        }
        v.push_back(d);
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}