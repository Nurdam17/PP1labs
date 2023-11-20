#include <bits/stdc++.h>

using namespace std;

void val(string s, int n){
    int count=0;

    int max=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            count++;
        }

        else
        {
            count=0;
        }

        if(count>max)
        {
            max=count;
        }
    }

    if(max>=n)
    {
        cout<<"Valid";
    }

    else
    {
        cout<<"Not valid";
    }
}

int main(){
    string s;

    int n;

    cin>>s>>n;

    val(s,n);

    return 0;
}