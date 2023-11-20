#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float x;

    int n,k;

    cin>>n>>k;

    x=(2*n+k-1)/k;

    if(2*n<=k)
    {
        cout<<2<<endl;
    }

    else
    {
        cout<<x<<endl;
    }

    return 0;
}