#include<bits/stdc++.h>
#define N 4
using namespace std;
void printMatrix(int arr[][N])
{
  cout<<endl;
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
    {
      cout<<arr[i][j]<<"\t";
    }
    cout<<"\n";
  }
}
void transposeMatrix(int a[][N],int b[][N])
{
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
    {
      b[i][j]=a[j][i];
    }
  }
}
int main()
{
  int a[N][N]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
  int b[N][N];
  printMatrix(a);
  transposeMatrix(a,b);
  printMatrix(b);
}