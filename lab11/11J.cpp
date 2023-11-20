#include <bits/stdc++.h>
using namespace std;
int ox,oy;
bool cmp(pair<int,int> a,pair<int,int> b){
    return sqrt(pow((a.first-ox),2)+pow((a.second-oy),2))<sqrt(pow((b.first-ox),2)+pow((b.second-oy),2));
}
int main(){
    cin>>ox>>oy;
    int n;
    cin>>n;
    vector<pair<int,int>> m;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        m.push_back(make_pair(a,b));
    }
    sort(m.begin(),m.end(),cmp);
    for(auto pair : m)
    {
        cout<<pair.first<<" "<<pair.second<<'\n';
    }
    return 0; 
}