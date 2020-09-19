#include<bits/stdc++.h>
using namespace std;
int toggleBits(int n , int l , int r) {

int ans = ((1 << r) - 1) ^ ((1 << (l - 1)) - 1); //sets the bit from l to r

return (n ^ ans); //toggles n
}
int main()
{
	int n,l,r;
	cin>>n>>l>>r;
	if(l>=1 && r>=l && n>=r)
		cout<< toggleBits(n,l,r);
	return 0;
}
