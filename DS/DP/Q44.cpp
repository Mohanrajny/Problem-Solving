#include<bits/stdc++.h>
using namespace std;
int max(int x,int y)
{
  return x>y ? x : y;
}
int lps(char *seq,int i,int j)
{
  if(i==j)
    return 1;
  if(i+1 ==j && seq[i]==seq[j])
    return 2;
  if(seq[i]==seq[j])
    return lps(seq,i+1,j-1)+2;
  return max(lps(seq,i+1,j),lps(seq,i,j-1));
}
int main()
{
  char seq[]="GEEKSFORGEEKS";
  int n=strlen(seq);
  cout<<lps(seq,0,n-1);
}
//DP
#include<bits/stdc++.h>
using namespace std;
int max(int x,int y)
{
  return x>y ? x : y;
}
int lps(char *str)
{
  int n=strlen(str);
  int L[n][n];
  for(int i=0;i<n;i++)
    L[i][i]=1; 
  for(int c1=2;c1<=n;c1++)
  {
    for(int i=0;i<n-c1+1;i++)
    {
      int j=i+c1-1;
      if(str[i]==str[j] && c1==2)
        L[i][j]=2;
      else if(str[i]==str[j])
        L[i][j]=L[i+1][j-1]+2;
      else
        L[i][j]=max(L[i+1][j],L[i][j-1]);
    }
  }
  return L[0][n-1];
}
int main()
{
  char seq[]="GEEKS FOR GEEKS";
  cout<<lps(seq);
}