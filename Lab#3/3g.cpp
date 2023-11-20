#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int a[n];

    int min = INT_MAX, max = INT_MIN;

    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];

        if (min > a[i]) 
        {
            min = a[i];
        }

        if (max < a[i]) 
        {
            max = a[i];
        }
    }
    for (int i = 0; i < n; ++i) 
    {
        if (a[i] == max) 
        {
            cout << min << " ";
            continue;
        }
        
        cout << a[i] << " ";
    }

    return 0;
}