https://takeuforward.org/data-structure/rearrange-array-in-increasing-decreasing-order/



// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int func ( int arr[], int n){
    vector<int>v;
    sort(v.begin(), v.end());
    //sorted the array
    for(int i = 0; i < n /2; i++){ cout<<arr[i]<<" ";}
    // for index 0 to half 
    for(int i = n -1; i >= n/2; i--){ cout<<arr[i]<<" ";}
    //for index half to end
}



int main() {
    
    int arr[] = {1,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    func(arr,n);
    return 0;
}
