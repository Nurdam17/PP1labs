#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;

    int n;

    cin>>n;

    int a;

    for(int i=0;i<n;i++)
    {
        cin>>a;

        v.push_back(a);
    }

    int k;

    cin>>k;

    if(find(v.begin(), v.end(), k)!=v.end())
    {
        cout<<"Yes";
    }

    else
    {
        cout<<"No";
    }

    return 0;
}