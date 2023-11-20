#include <bits/stdc++.h>

using namespace std;

string lucky(long long int n){

    int sum=0;

    int l=to_string(n).length();

    int t=n%10;

    for(int i=0;i<l;i++)
    {
        int last=n%10;

        sum+=last;

        n/=10;
    }

    if(sum%t==0)
    {
        return "Yes";
    }

    else
    {
        return "No";
    }
}

int main(){
    long long int n;

    cin>>n;

    cout<<lucky(n);

    return 0;
}