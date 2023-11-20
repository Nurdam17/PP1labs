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

    int b;

    cin>>b;

    v.erase(v.begin()+b);

    for(int i=0;i<n-1;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}