
https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    
    int long a[n];
    
    for (int i = 0; i < n; ++i) {
        
        cin>>a[i];
    }
   int long sum = 0;
    for (int i = 0; i < n; ++i) {
    sum = sum + a[i];
    }
    cout<<sum;
    return 0;
}
