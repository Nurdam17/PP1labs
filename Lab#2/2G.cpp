#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;

    int b;

    int max=-1000;

    for(int i=0;i<n;i++)
    {
        cin>>b;

        if(max<b)
        {
            max=b;
        }
    }

    cout<<max;
}