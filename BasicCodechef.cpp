QUESTION LINK  - https://www.codechef.com/LP1TO201/problems/CHFRICH?tab=statement



Chef aims to be the richest person in Chefland by his new restaurant franchise. Currently, his assets are worth 
A
A billion dollars and have no liabilities. He aims to increase his assets by 
X
X billion dollars per year.
Also, all the richest people in Chefland are not planning to grow and maintain their current worth.

To be the richest person in Chefland, he needs to be worth at least 
B
B billion dollars. How many years will it take Chef to reach his goal if his value increases by 
X
X billion dollars each year?

Input
The first line contains an integer 
T
T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, three integers 
A
A, 
B
B, 
X
X.
Output
For each test case, output in a single line the answer to the problem.
Constraints
1
≤
T
≤
21
 
000
1≤T≤21 000
100
≤
A
<
B
≤
200
100≤A<B≤200
1
≤
X
≤
50
1≤X≤50
X
X divides 
B
−
A
B−A
Subtasks
Subtask #1 (100 points): Original constraints



MY SOLUTION - #include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	while(n--){
	    
	    int a,b,x;
	    
	    cin>>a;
	    cin>>b;
	    cin>>x;
	    
	    int s = b-a;
	    cout<<s/x<<endl;
	}
	
	
	return 0;
}
