#include <bits/stdc++.h>

using namespace std;

void sorting(vector<int> v, int n){
    int even=0, odd=0;

    vector<int> v1;

    vector<int> v2;

    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            even++;
        }

        if(v[i]%2!=0)
        {
            odd++;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            v1.push_back(v[i]);
        }

        if(v[i]%2!=0)
        {
            v2.push_back(v[i]);
        }
    }

    sort(v1.begin(), v1.end());

    reverse(v1.begin(), v1.end());

    sort(v2.begin(), v2.end());

    for(int i=0;i<even;i++)
    {
        cout<<v1[i]<<" ";
    }

    for(int j=0;j<odd;j++)
    {
        cout<<v2[j]<<" ";
    }
}

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

    sorting(v, n);

    return 0;
}