#include <iostream>

using namespace std;

int main(){
    long long int n;

    cin>>n;

    long long int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        if((arr[i]+1)%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}