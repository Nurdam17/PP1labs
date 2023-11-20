#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    int sum=0;

    while(cin>>n)
    {
        sum+=n;

        if(n==0)
        {
            break;
        }
    }

    cout<<sum;

    return 0;
}