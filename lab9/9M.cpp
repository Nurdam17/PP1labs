#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    queue<string> q;
    int typeofaction;
    string boy;
    for(int i=0;i<t;i++)
    {
        cin>>typeofaction;
        if(typeofaction==1)
        {
            cin>>boy;
            q.push(boy);
        }
        else
        {
            q.pop();
        }

        if(q.empty())
        {
            cout<<"queue is empty\n";
        }
        else
        {
            cout<<q.front()<<'\n';
        }
    }
    return 0;
}