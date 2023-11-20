#include <bits/stdc++.h>
#include <climits>

using namespace std;

int a[1000000];

int m(int n){
    int max=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    return max;
}

int main(){
    int n=4;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<m(n);

    return 0; 
}