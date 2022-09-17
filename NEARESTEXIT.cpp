https://www.codechef.com/submit/NEARESTEXIT

MY SOLUTION

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;

while(t--){
    
    int i = 100;
    int x;
    cin>>x;

    if(i-x > 50){
        cout<<"LEFT"<<endl;
    }
    else if(x == 50){
         cout<<"LEFT"<<endl;
    }
    else{
        cout<<"RIGHT"<<endl;
    }
    
}
	return 0;
}
