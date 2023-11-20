#include <bits/stdc++.h>

using namespace std;

void kinary(int n, int k){
    string s="";

    int rem;

    char c;

    while(n!=0)
    {
        rem=n%k;

        if(rem<10)
        {
            c=rem+48;
        }

        else
        {
            c=rem+55;
        }

        s+=c;

        n/=k;
    }

    int i=0, j=s.length()-1;

    while(i<=j)
    {
        swap(s[i], s[j]);

        i++;

        j--;
    }

    cout<<s;
}

int main(){
    int n,k;

    cin>>n>>k;

    kinary(n, k);

    return 0;
}