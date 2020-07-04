#include<bits/stdc++.h>
using namespace std;
void printUnion(int arr1[],int arr2[],int m,int n)
{
  int i=0,j=0;
  while(i<m && j<n)
  {
    if(arr1[i]<arr2[j])
      i++;
    else if(arr2[j]<arr1[i])
      j++;
    else
    {
      cout<<arr1[i++]<<" ";
      j++;
    }
  }
  // while(i<m)
  //   cout<<arr1[i++]<<" ";
  // while(j<n)
  //   cout<<arr2[j++]<<" ";
}
int main()
{
  int arr1[]={3,1,4,5,6};
  int arr2[]={2,3,6,7,8};
  int m=sizeof(arr1)/sizeof(arr1[0]);
  int n=sizeof(arr2)/sizeof(arr2[0]);
  printUnion(arr1,arr2,m,n);
}