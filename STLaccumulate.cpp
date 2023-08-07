https://takeuforward.org/arrays/calculate-sum-of-the-elements-of-the-array/

#include<bits/stdc++.h>
using namespace std;
int main() {
int n = 5;
int arr[] = {1, 2, 3, 4, 5};

int sum = 0;

cout<<accumulate(arr, arr + n, sum);
}
