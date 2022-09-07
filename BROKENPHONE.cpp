https://www.codechef.com/START55D/problems/BROKENPHONE

MY SOLUTION - 
  
#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;

while(n--){
    int x,y;
    cin>>x;
    cin>>y;
    
    if (x<y){
        cout<<"REPAIR"<<endl;
    }
    else if (x>y){
        cout<<"NEW PHONE"<<endl;
    }
    else{
        cout<<"ANY"<<endl;
    }
}
	return 0;
}
