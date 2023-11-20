#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;

    cin>>n;

    if((n+1)%2==0)
    {
        cout<<"Super"<<endl;
    }

    else if(n%2==0 && 2<=n && 5>=n)
    {
        cout<<"Not Super"<<endl;
    }

    else if(n%2==0 && 6<=n && 20>=n)
    {
        cout<<"Super"<<endl;
    }

    else if(n%2==0 && 20<n)
    {
        cout<<"Not Super"<<endl;
    }

    return 0;
}