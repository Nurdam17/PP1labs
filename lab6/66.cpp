#include <bits/stdc++.h>

using namespace std;



int n;

int f(int n){
    int count=0;


    return count;
}

int main(){
    int n;

    cin>>n;

    int a[n];


    int b[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int j=0;j<n;j++)
    {
        cin>>b[j];
    }
    sort(a, a+n);
    sort(b, b+n);

    int cnt1 = 0;
    for(int i = 0; i<n; i++){
        for(int j = i; j < n; j++){
            if(a[i] == b[j] || b[j] == a[i - 2]){
                cnt1++;
            }
        }
    }
    cout << cnt1;


    // cout<<f(n);
    

    return 0;
}