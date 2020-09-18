#include<bits/stdc++.h>
using namespace std;
void decToBinary(int n,int m) 
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
  
    if(a[size-(m+1)] == 1)
    	cout<<"Yes"<<endl;
    else
    	cout<<"No"<<endl;
} 
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>k;
		decToBinary(n,k);
	}
	return 0;
}
