#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(){
    int n;

    cin>>n;

    int y[n];

    int pos;

    int max=INT_MIN;

    for(int i=0;i<n;i++)
    {
        cin>>y[i];

        if(y[i]>max)
        {
            max=y[i];

            pos=i+1;
        }
    }

    cout<<pos;

    return 0;
}