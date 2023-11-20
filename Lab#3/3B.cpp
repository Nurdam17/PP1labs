#include <iostream>

using namespace std;

int main(){
    long long int n;

    cin>>n;

    long long int mas[n];

    long long int counter=0;

    for(int i=0;i<n;i++)
    {
        cin>>mas[i];

        if(mas[i]>0)
        {
            counter++;
        }
    }

    cout<<counter;

    return 0;
}