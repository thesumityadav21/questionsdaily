https://www.codechef.com/LP1TO201/problems/VDATES


MY SOL. -
  
  #include <iostream>
using namespace std;

int main() {

int n;
cin>>n;


while(n--){
    
    int d,l,r;
    cin>>d;
    cin>>l;
    cin>>r;
    
    if(d >= l && d <= r){
        cout<<"Take second dose now"<<endl;
    }
    else if(d >= l && d >= r){
        cout<<"Too Late"<<endl;

    }
    else{ cout<<"Too Early"<<endl;}
}

	return 0;
}
