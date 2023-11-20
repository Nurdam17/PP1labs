#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<pair<int, int>> v;

    int n;

    cin>>n;

    int x,y;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y;

        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());

    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<'\n';
    }

    return 0;
}