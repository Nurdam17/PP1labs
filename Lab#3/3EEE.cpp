#include <iostream>

using namespace std;

int main(){
    int n;

    cin>>n;

    long long int b[n];

    long long int a=0;

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<n;i++)
    {
        a=a+b[i];
    }

    cout<<a;

    return 0;
}