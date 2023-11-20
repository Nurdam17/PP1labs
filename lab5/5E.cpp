#include <bits/stdc++.h>

using namespace std;

int main(){
    string N;

    cin>>N;

    int even=0;

    int odd=0;

    for(int i=0;i<N.length();i++)
    {
        if(i%2==0)
        {
            odd+=N[i];
        }

        else if(i%2!=0)
        {
            even+=N[i];
        }
    }

    if(odd==even)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    return 0;
}