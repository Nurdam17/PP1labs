#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin>>s;

    int a[10]={0};

    int n;

    for(int i=0;i<s.length();i++)
    {
        n=s[i]-'0';

        a[n]++;
    }

    int count=0;

    int eq=true;

    for(int i=0;i<10;i++)
    {
        if(a[i]>0)
        {
            count=a[i];

            break;
        }
    }

    for(int i=0;i<10;i++)
    {
        if(a[i]>0 && a[i]!=count)
        {
            eq=false;
        }
    }

    if(eq)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    return 0;
}