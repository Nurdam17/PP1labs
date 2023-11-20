#include <bits/stdc++.h>

using namespace std;

double perc(double x, double y){
    double p=y*100/x;
    
    return p;
}

int main(){
    double a,b;

    cin>>a>>b;

    cout<<perc(a,b);

    return 0;
}