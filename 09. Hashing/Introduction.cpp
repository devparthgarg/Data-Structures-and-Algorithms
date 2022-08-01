#include<bits/stdc++.h>
using namespace std;

int main()
{
	/*

	Hashing:
	--> passing data through a formula 
	which produces a result, called a hash.
	--> usually used to implement insert,
	search and delete in O(1).
	--> always has unique values.
	--> not useful in: 
		- finding closest value
		- sorted data
		- prefix searching

	Applications of Hashing:
	--> dicitonaries
	--> database indexing
	--> cryptography
	--> caches
	--> routers
	--> getting data from databases

	Direct Address Table:
	--> imagine 1000 keys with values
	from (0-999) implement: search,insert
	delete in O(1)
	--> make array of size int arr[1000]
	for every insert make corresponding 
	index 1 store value like arr[i]=1
	--> for values(1000-1999) use insert 
	as arr[i-1000]=1
	--> disadvatnages:
		- large values not handled
		- strings not handled
		- floating values not handled properly

	Hashing:
	--> take large keys and take hashing function
	generate small values and use these values 
	as index.

	Hash Function:
	--> should generate values from (0,m-1)
	--> should be fast O(1) for integers and O(len)
	for strings
	Eg: 
		- hash=large_key%m
		- string="abcd" --> hash='a'*0+'b'*1+'c'*2+d*3
	--> should do uniform distribution

	Collision Handling:
	--> if we know keys in advance then perfect hashing.
	--> if we don't know keys in advance then use one 
	of the following.
		- Linear Probing
		- Quadratic Probing
		- Double Hashing

	Chaining
	--> array of linked list headers
	--> suppose hash_val=key%7
	--> hash_val = 0 then stores there value 
	if again 0 appear append value to it.
	--> performance:
		m = no. of slots
		n = no. of keys to be inserted
		load factor (alpha) = n/m
		expected chain length = alpha
	*/

	return 0;
}