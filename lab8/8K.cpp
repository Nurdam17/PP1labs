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

    v.erase(v.begin(), v.end()-k);

    int sum=0;

    for(int i=0;i<k;i++)
    {
        sum+=v[i];
    }

    cout<<sum;

    return 0;

}