Problem
Read problem statements in Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
Chef is a very lazy person. Whatever work is supposed to be finished in xx units of time, he finishes it in m * xm∗x units of time. But there is always a limit to laziness, so he delays the work by at max dd units of time. Given x, m, dx,m,d, find the maximum time taken by Chef to complete the work.

Input Format
First line will contain TT, number of testcases. Then the testcases follow.
Each testcase contains a single line of input, three integers x, m, dx,m,d.
Output Format
For each testcase, output in a single line answer to the problem.

Constraints
1 \leq T \leq 10^41≤T≤10 
4
 
1 \leq x, m \leq 101≤x,m≤10
0 \leq d \lt 1000≤d<100
Sample 1:
Input
Output
3
1 1 0
1 3 1
2 2 3
1
2
4
Explanation:
TestCase 11: Chef takes 1 * 1 = 11∗1=1 unit of time which is equal to the upper bound(1 + 0 = 11+0=1 unit) to do the work.

TestCase 22: Chef takes min(1 * 3, 1 + 1) = min(3, 2) = 2min(1∗3,1+1)=min(3,2)=2 units of time to do the work.

TestCase 33: Chef takes 2 * 2 = 42∗2=4 units of time which is less than the upper bound(2 + 3 = 52+3=5 units) to do the work.




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,d;
	    cin>>a>>b>>d;
	    
	    cout<<  min ( (a*b),(a+d))<<endl;
	}
	return 0;
}

