#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v1;
    vector<int> v2;
    string s;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>s>>a;
        v1.push_back(s);
        v2.push_back(a);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<endl;
    }
    return 0;
}