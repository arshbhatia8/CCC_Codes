#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	long long int ans=a[n-1];
	if(n>1)
	ans=ans-a[0];
	for(int i=1;i<n-1;i++)
	{
		ans=ans+abs(a[i]);
	}
	cout<<ans<<endl;
}
