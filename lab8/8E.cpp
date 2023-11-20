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

    int l,r;

    cin>>l>>r;

    v.erase(v.begin()+l, v.begin()+r+1);

    for(int i=0;i<n-(r-l)-1;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}