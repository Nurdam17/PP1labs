#include <bits/stdc++.h>

using namespace std;

int main(){
    int p;

    cin>>p;

    int b=0;

    for(int i=1;i<=p;i++)
    {
        if(p%i==0)
        {
            b++;
        }
    }

    if(b>2)
    {
        cout<<"No";
    }

    else
    {
        cout<<"Yes";
    }

    return 0;
}