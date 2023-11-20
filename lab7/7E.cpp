#include <bits/stdc++.h>

using namespace std;

string check(int n){
    int d[64];

    for(int i=0;i<64;i++)
    {
        d[i]=pow(2, i);
    }

    for(int i=0;i<64;i++)
    {
        if(find(d, d+64, n)!=d+64)
        {
            return "Yes";
        }

        else
        {
            return "No";
        }
    }
}

int main(){
    int n;

    cin>>n;

    cout<<check(n);

    return 0;
}