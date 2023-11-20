#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;

    int mas[n];

    for(int i=0;i<n;i++)
    {
        cin>>mas[i];
    }

    sort(mas,mas+n);

    for(int i=0;i<n;i++)
    {
        if(mas[i]!=mas[i-1])
        {
            cout<<mas[i]<<" ";
        }
    }
    return 0;
}