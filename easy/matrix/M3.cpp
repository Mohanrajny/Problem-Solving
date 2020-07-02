#include<bits/stdc++.h>
#define N 4
using namespace std;
void subtract(int a[][N],int b[][N],int c[][N])
{
  for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
      c[i][j]=a[i][j]-b[i][j];
}
void print(int arr[][N])
{
  cout<<endl;
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
    {
      cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
  }
}
int main()
{
  int a[N][N]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
  int b[N][N]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
  int c[N][N];
  subtract(a,b,c);
  print(c);
}