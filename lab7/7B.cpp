#include <bits/stdc++.h>

using namespace std;

void bin(int n){
    int binary[1000];

    int count=0;

    for(int i=0;n>0;i++)
    {
        binary[i]=n%2;

        n/=2;

        count++;
    }

    for(int j=count-1;j>=0;j--)
    {
        cout<<binary[j];
    }

}

int main(){
    int n;

    cin>>n;

    bin(n);

    return 0;
}