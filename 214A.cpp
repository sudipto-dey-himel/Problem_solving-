//SYSTEM OF EQUATION
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n, m, a, b, count=0;
    cin>>n>>m;
    for(a=0; a<=n; a++) {
        for(b=0; b<=m; b++) {
            if((a*a+b==n) && (a+b*b==m))
            count++;
        }
    }
    cout<<count<<endl;
}