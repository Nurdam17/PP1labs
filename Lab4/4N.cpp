#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;

    int start=2;

    int prime=0;

    int i,j;

    for(i=start;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime++;

                break;
            }
        }

        if(prime==0 && i!=1)
        {
            cout<<i<<" is prime"<<endl;
        }

        prime=0;
    }

    return 0;
}