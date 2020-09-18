#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int m,n;
        int flag = 0;
        cin>>m>>n;

        int ans = m^n;
		//cout<<ans<<endl;
        int index=0;
        while(ans>0){
            int a = ans%2; 
            if(a==1){
                flag = 1;
                cout<<index+1<<endl;
                break;
            }
            index++;
            ans=ans/2;
        }

        if(!flag){
            cout<<"-1"<<endl;
        }
    }
}

