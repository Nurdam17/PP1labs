#include <bits/stdc++.h>
using namespace std;
bool isPal(vector<int> v){
    for(int i=0;i<v.size()/2;i++)
    {
        if(v[i]!=v[v.size()-i-1])
        {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    do
    {
        if(isPal(v))
        {
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            return 0;
        }
    } while (next_permutation(v.begin(),v.end()));
    cout<<"Impossible"<<'\n';
    return 0;
}