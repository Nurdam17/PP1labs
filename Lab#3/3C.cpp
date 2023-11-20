#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long int n;

    cin>>n;

    long long int R[n];

    for(int i=0;i<n;i++)
    {
        cin>>R[i];
    }

    max_element(R, R+n);

    long long int &max= *max_element(R, R+n);

    cout<<max;

    return 0;
}