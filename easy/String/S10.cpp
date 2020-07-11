#include<bits/stdc++.h>
using namespace std;
void isZoo(string str)
{
	int n = str.length();
	int z_count=0,o_count=0;
	for(int i=0;i<n;i++)
	{
		if(str[i]=='z')
			z_count++;
		else if(str[i]=='o')
			o_count++;
	}
	if(z_count*2 == o_count)
		cout<<"Yes";
    
	else
		cout<<"No";
}
int main()
{
	string str;
	cin>>str;
	isZoo(str);
  return 0;
}