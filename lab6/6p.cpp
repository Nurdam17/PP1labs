#include <bits/stdc++.h>

using namespace std;

int neg(int n){
    if(n>0)
    {
        return n;
    }

    else if(n<0)
    {
        return -n;
    }
}

int main(){
    int n;

    cin>>n;

    cout<<neg(n);

    return 0;
}