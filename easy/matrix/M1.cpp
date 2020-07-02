
// 1
// Program to check if two given matrices are identical


// https://www.geeksforgeeks.org/program-to-check-if-two-given-matrices-are-identical/



#include<bits/stdc++.h>
#define N 4
using namespace std;

bool isIdentical(int a[][N],int b[][N])
{
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
    {
      if(a[i][j]!=b[i][j])
        return false;
    }
  }
  return true;
}

int main()
{
  int a[N][N]={{1,2,3,4},{5,6,7,8},{1,2,1,2},{2,3,2,3}};
  int b[N][N]={{1,2,3,4},{5,6,7,8},{1,2,1,2},{2,3,2,3}};
  cout<<isIdentical(a,b);
}