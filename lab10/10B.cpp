#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    long long int n;
    for(int i=0;i<=x;i++)
    {
        n=powl(i,i);
        cout<<n<<" ";
    }
    return 0;
}