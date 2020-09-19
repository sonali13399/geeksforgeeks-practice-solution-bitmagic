#include<bits/stdc++.h>
using namespace std;
int setKthBit(int N, int K)
{
	return (N | 1<<K);
}
int main()
{
	int N,K;
    cin>>N>>K;
    cout<< setKthBit(N,K);
    return 0;
}
