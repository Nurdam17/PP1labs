#include <bits/stdc++.h>

using namespace std;

int f(long long int n){
    int sum=0;

    int last;

    int l=to_string(n).length();

    for(int i=0;i<l;i++)
    {
        last=n%10;

        sum+=last;

        n/=10;
    }

    return sum;
}

int main(){
    long long int n;

    cin>>n;

    cout<<f(n);

    return 0;
}