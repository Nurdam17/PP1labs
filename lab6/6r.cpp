#include <bits/stdc++.h>

using namespace std;

char up(char x){
    char u=x-32;

    if(x>='A' && x<='Z')
    {
        return x;
    }

    else if(x>='a' && x<='z')
    {
        return u;
    }
}

int main(){
    char a;

    cin>>a;

    cout<<up(a);

    return 0;
}