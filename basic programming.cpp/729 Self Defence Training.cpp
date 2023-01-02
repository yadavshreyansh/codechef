Problem
After the phenomenal success of the 36th Chamber of Shaolin, San Te has decided to start 37th Chamber of Shaolin. The aim this time is to equip women with shaolin self-defence techniques.

The only condition for a woman to be eligible for the special training is that she must be between 1010 and 6060 years of age, inclusive of both 1010 and 6060.

Given the ages of NN women in his village, please help San Te find out how many of them are eligible for the special training.

Input Format
The first line of input contains a single integer TT, denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains a single integer NN, the number of women.
The second line of each test case contains NN space-separated integers A_1, A_2,..., A_NA 
1
​
 ,A 
2
​
 ,...,A 
N
​
 , the ages of the women.
Output Format
For each test case, output in a single line the number of women eligible for self-defence training.

Constraints
1 \leq T \leq 201≤T≤20
1 \leq N \leq 1001≤N≤100
1 \leq A_i \leq 1001≤A 
i
​
 ≤100
Sample 1:
Input
Output
3
3
15 23 65
3
15 62 16
2
35 9
2
2
1
Explanation:
Test Case 11: Out of the women, only the 1^{st}1 
st
  and 2^{nd}2 
nd
  women are eligible for the training because their ages lie in the interval [10,60][10,60]. Hence the answer is 2.

Test Case 22: Only the 1^{st}1 
st
  and 3^{rd}3 
rd
  women are eligible for the training because their ages lie in the interval [10,60][10,60]. Hence the answer is again 2.

Test Case 33: Only the 1^{st}1 
st
  woman with age 3535 is eligible for the training. Hence the answer is 11.

Did you like the problem statement?
5 users found this helpful




#include <iostream>
using namespace std;

int main() {
	int i,n,a,t;
	int p[100];
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>p[i];
	       
	    }
	    for(i=0;i<n;i++)
	    {
	        if(p[i]>=10 && p[i]<=60)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

