#include <bits/stdc++.h>

using namespace std;

int f(int x, int n){

    long long int p=pow(x,n);

    return p;
}

int main(){
    int x=2;

    int n;

    cin>>n;

    cout<<f(x, n);

    return 0;
}