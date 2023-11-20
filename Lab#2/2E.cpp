#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a;

    cin>>a;

    int b;

    cin>>b;

    if(a==b)
    {
        cout<<"0"<<endl;
    }

    else if(a<b)
    {
        cout<<"2"<<endl;
    }

    else
    {
        cout<<"1"<<endl;
    }

    return 0;
}