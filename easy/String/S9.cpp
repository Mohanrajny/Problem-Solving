#include<bits/stdc++.h>
using namespace std;
void isPalindrome(string str)
{
	int left=0, right=str.length()-1;
	while(left<right)
	{
		if(str[left++] != str[right--])
		{
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";
}
int main()
{
	string str;
	cin>>str;
	isPalindrome(str);
	return 0;
}