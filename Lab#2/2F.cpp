#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;

    cin>>n;

    int S=0;

    for(int i=n; i>0; i--)
    {
        S+=i;
    }

    cout<<S<<endl;

    return 0;
}