#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 

	int arr[] = { 14, 12, 15, 11, 10 }; 

	set<int> s(arr, arr + 5); 

	if (s.count(11)) 
		cout << "11 is present in the set\n"; 
	else
		cout << "11 is not present in the set\n"; 
		
	if (s.count(18)) 
		cout << "18 is present in the set\n"; 
	else
		cout << "18 is not present in the set\n"; 

	return 0; 
} 
