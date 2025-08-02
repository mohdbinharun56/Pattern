#include <bits/stdc++.h>
using namespace std;

int main() {
     int n;
     cin>>n;
    int k = (n*2)-1;
    int s = 1;
    
     for(int i=1;i<=k;i++){
        for(int j=1;j<=s;j++){
            cout << "*";
        }
        cout<<endl;
        if(i<n) s++;
        else s--;
    }
    
}
