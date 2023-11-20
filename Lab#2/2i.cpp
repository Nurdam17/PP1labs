#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a;

    int counter=0;

    cin>>a;

    int b;

    b=0;

    int i;

    for(i=0;i<a;i++)
    {
        cin>>b;

        if(b%10==7)

        {
            counter++;
        }
    }

    cout<<counter<<endl;

    return 0;
}