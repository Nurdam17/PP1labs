#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a;
    vector<int> v;
    vector<int> :: iterator it;
    vector<bool> check(n, false);
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(!check[a])
        {
            v.push_back(a);
        }
        check[a]=true;
    }
    do {
        for (int x : v) {
            cout << x << ' ';
        }
        cout << '\n';
    } while (next_permutation(v.begin(), v.end()));
    
    return 0;
}