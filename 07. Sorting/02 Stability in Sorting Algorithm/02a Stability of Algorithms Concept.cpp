#include<bits/stdc++.h>
using namespace std;

int main()
{
	/*
	Stability of Sorting Algorithms

	Consider a table 1:

	Name   |  Grade
		   |
	Parth  |  C
	Aditya |  B
	Yash   |  B
	Kunal  |  B
	Pulkit |  A
	Yashul |  A

	Now sort table 1 using a "stable algo" on the basis of grade

	Name   |  Grade
		   |
	Pulkit |  A
	Yashul |  A
	Aditya |  B
	Yash   |  B
	Kunal  |  B
	Parth  |  C

	Now sort table 1 using a "unstable algo" on the basis of grade

	Name   |  Grade
		   |
	Yashul |  A
	Pulkit |  A
	Yash   |  B
	Kunal  |  B
	Aditya |  B
	Parth  |  C

	Observations :

	1. when we sort using stable algo relative ordering is same as in original table
	Pulkit appears before Yashul both in original table and in stable algo table .

	2. when we sort using unstable algo relative ordering is not same as in original
	table Yashul appears before Pulkit in unstable algo table .

	Conclusion :

	With an unstable sort, there is no guarantee the alphabetical ordering is maintained
	as shown in the tables above.

	*/
	return 0;
}