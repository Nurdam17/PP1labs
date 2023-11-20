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

    sort(v.begin(), v.end());

    for(int i=0;i<n;i++)
    {
        if(v[i]!=v[i+1])
        {
            if(v[i]%2!=0)
            {
                cout<<v[i]<<" ";
            }
        }
    }

    return 0;
}