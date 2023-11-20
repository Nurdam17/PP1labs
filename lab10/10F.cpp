#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int totofcredits=0;
    double sum=0;
    int total;
    double gpa;
    for(int i=0;i<n;i++)
    {
        int att1,att2,final,credits;
        cin>>att1>>att2>>final>>credits;
        if(att1+att2<30 || final<20)
        {
            sum+=0;
            totofcredits+=credits;
        }
        else
        {
            total=att1+att2+final;
            totofcredits+=credits;
        }
        if(total<=100 && total>=95)
        {
            double k=4*credits;
            sum+=k;
        }
        else if(total<=94 && total>=90)
        {
            double k=3.666667*credits;
            sum+=k;
        }
        else if(total<=89 && total>=85)
        {
            double k=3.333333*credits;
            sum+=k;
        }
        else if(total<=84 && total>=80)
        {
            double k=3*credits;
            sum+=k;
        }
        else if(total<=79 && total>=75)
        {
            double k=2.666667*credits;
            sum+=k;
        }
        else if(total<=74 && total>=70)
        {
            double k=2.333333*credits;
            sum+=k;
        }
        else if(total<=69 && total>=65)
        {
            double k=2*credits;
            sum+=k;
        }
        else if(total<=64 && total>=60)
        {
            double k=1.666667*credits;
            sum+=k;
        }
        else if(total<=59 && total>=55)
        {
            double k=1.333333*credits;
            sum+=k;
        }
        else if(total<=54 && total>=50)
        {
            double k=credits;
            sum+=k;
        }
        total=0;
        gpa=sum/totofcredits;
    }
    cout<<gpa;
    return 0;
}