#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		int arr[10]={0};
		while(n>0)
		{
			arr[n%10]++;
			n=n/10;
		}
		int max_rep=0,result=0;
		for(int i=0;i<=9;i++)
		{
			if(arr[i]>0 && arr[i]>max_rep)
			{
				max_rep=arr[i];
				result=i;
			}
		}
		cout<<result;
	}
	return 0;
}