#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;

    cin>>n;

    int b=0;

    int i;

    int odd=0;

    int even=0;

    for(i=0;i<n;i++)
    {
        cin>>b;

        if(b%2==0)
        {
            even++;
        }

        else
        {
            odd++;
        }
    }

    cout<<even<<" ";

    cout<<odd;

    return 0;

}