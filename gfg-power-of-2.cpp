#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(long long int  n)  
{  //another process
   /* if (n == 0)  
        return 0;  
    while (n != 1)  
    {  
        if (n%2 != 0)  
            return 0;  
        n = n/2;  
    }  
    return 1;  */ 
    //using bitwise operator
    if((n & (n-1)) == 0)
    	return 1;
    else 
    	return 0;
}  
int main()
{
	int t;
	long long int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		isPowerOfTwo(n)? cout<<"YES\n": cout<<"NO\n";  
	}
	return 0;
}
