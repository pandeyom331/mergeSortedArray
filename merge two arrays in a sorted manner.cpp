#include <bits/stdc++.h>
#include <iostream> 
#include <algorithm> 
using namespace std; 

int main() 
{ 
    int i,j,k,n1,n2,a[10],b[10];
	cin>>n1>>n2;
	
	for(i = 0; i<n1; i++)
	{
	    cin>>a[i];
	}

    for(j =0; j < n2; j++)
    {
        cin>>b[j];
    }

	
	int c[n1 + n2]; 
	merge(a, (a + n1), b, (b + n2), c); 

	// Print the merged array. 
	for (int i = 0; i < (n1 + n2); i++) 
		cout << c[i] << " "; 

	return 0; 
} 
