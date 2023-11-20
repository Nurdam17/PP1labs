#include <iostream>

using namespace std;

int main(){
    int x,y=0,zero=0;

    cin>>x;

    for(int i=0;i<x;i++)
    {
        cin>>y;

        while(y>=10)
        {
            if(y%10==0)
            {
                zero++;
            }

            y/=10;
        }
    }

    cout<<zero;

    return 0;

}