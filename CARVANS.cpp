https://www.codechef.com/MP1TO203/problems/FLOW010?tab=statement


#include <iostream>
using namespace std;



int main() {
    
    int t;
     char x;
     cin>>t;
     while(t--){
         cin>>x;
         
         if ( x == 'B' || x == 'b'  ){
             cout<<"BattleShip"<<endl;
         }
          if ( x == 'C' || x == 'c'  ){
             cout<<"Cruiser"<<endl;
         }
           if ( x == 'D' || x == 'd'  ){
             cout<<"Destroyer"<<endl;
         }
         if ( x== 'F' || x == 'f'){
             cout<<"Frigate"<<endl;
         }
         
     }
	
	
	
	return 0;
}
