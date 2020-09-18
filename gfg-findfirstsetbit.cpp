#include<bits/stdc++.h>
using namespace std;
void decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  	int k=0;
    // printing binary array in reverse order 
    int a[i];
    int size=i;
    for (int j = i - 1; j >= 0; j--) 
    {
    	a[k++]= binaryNum[j];
    		
	}
  
    for(int i=size-1;i>=0;i--)
    {
    	if(a[i] == 1)
    	{
    		cout<< size-i<<endl;
    		break;
		}
	}
} 
int main()
{
	int t;
	cin>>t;
	if(t == 0)
	{
		cout<<0;
		return 0;
	}
	int n[t];
	for(int i=0;i<t;i++)
	{
		cin>>n[i];
	}
	for(int i=0;i<t;i++)
	{
	    if(n[i] == 0)
	        cout<<0<<endl;
	   else
	    	decToBinary(n[i]);
	}
	return 0;
}
