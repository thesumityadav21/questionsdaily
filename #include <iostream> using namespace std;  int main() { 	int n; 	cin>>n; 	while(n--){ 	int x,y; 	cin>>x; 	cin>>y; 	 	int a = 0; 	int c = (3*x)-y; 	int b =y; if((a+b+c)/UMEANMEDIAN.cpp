https://www.codechef.com/START55D/problems/MEANMEDIAN?tab=statement


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
	
	int a = 0;
	int c = (3*x)-y;
	int b =y;
if((a+b+c)/3==x){
	    cout<<a<<" "<<b<<" "<<c<<endl;
}
else
{
    cout<<a<<" "<<b<<" "<<c<<endl;
}
}
	return 0;
}
