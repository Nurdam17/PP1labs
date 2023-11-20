#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n, int num){
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0 || num<=1)
        {
            return false;
        }
    }

    return true;
}

void count(int n, vector<int> v, int k){
    int counter=0;
    for(auto i : v)
    {
        if(isPrime(n, i)==1 && i>=k)
        {
            counter++;
        }
    }

    cout<<counter;
}

int main(){
    vector<int> v;

    int n;

    cin>>n;

    int a;

    for(int i=0;i<n;i++)
    {
        cin>>a;

        v.push_back(a);
    }

    int k;

    cin>>k;

    count(n, v, k);

    return 0;
}