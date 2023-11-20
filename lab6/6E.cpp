#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

double gip(double a,double b){
    double c=a*a+b*b;

    return sqrt(c);
}

int main(){
    double a,b;

    cin>>a>>b;

    double c=gip(a,b);

    cout<<setprecision(4)<<c<<'\n';

    return 0;
}