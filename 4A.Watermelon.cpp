
#include<bits/stdc++.h>
using namespace std;
int main() {
    int w;
    cin>>w;
    if(w>=1 && w<=100) {
        if(w>2 && w%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else
    cout<<"Invalid"<<endl;
    return 0;
}
