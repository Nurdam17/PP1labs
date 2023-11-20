#include <bits/stdc++.h>

using namespace std;

void occ(vector<int> v, int n, int k){
    int kcount=0;

    for(int i=0;i<n;i++)
    {
        if(v[i]==k)
        {
            kcount++;
        }
    }

    cout<<kcount;
}


int main(){
    vector<int> v;

    int n, k;

    cin>>n>>k;

    int a;

    for(int i=0;i<n;i++)
    {
        cin>>a;

        v.push_back(a);
    }

    occ(v, n, k);

    return 0;

}