https://www.codechef.com/LP1TO201/problems/SMOL?tab=statement

#include <iostream>
using namespace std;

int main() {

      int t;   cin>>t;
      
       while(t--){
           int long long n, k;
           cin>>n;
           cin>>k;
      if (n < k){
          cout<<n<<endl;
      }
      else{
          int a =  n%k ;
          cout<<a<<endl;
      }
          
      }
return 0;
}
