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

    int max=INT_MIN;

    int min=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(v[i]>max)
        {
            max=v[i];
        }

        if(v[i]<min)
        {
            min=v[i];
        }
    }

    cout<<max-min;

    return 0;
}