#include <bits/stdc++.h>

using namespace std;

void even(string s){
    int evendig=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]%2==0)
        {
            evendig++;
        }
    }

    cout<<evendig;
}

int main(){
    string s;

    cin>>s;

    even(s);

    return 0;
}