#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;

    int x=sqrt(n);

    if(n/x==sqrt(n))
    {
        cout<<"Yes";
    }

    else
    {
        cout<<"No";
    }

    return 0;
}