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

    sort(v.begin(), v.end());

    //v.erase(v.begin()+k+1, v.begin()+(n-k));

    for(int i=0;i<k;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}