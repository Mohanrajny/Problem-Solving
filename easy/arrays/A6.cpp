//bug:- Need to fix for even

#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
void rotateArray(int arr[],int n)
{
	int d=2;
	int temp[d];
	for(int i=0;i<d;i++)
		temp[i]=arr[i];

  for(int i=0;i<=d;i++)
    arr[i]=arr[i+d];

  for(int i=d,j=0;i<n;i++,j++)
    arr[i+1]=temp[j];
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	rotateArray(arr,n);
	printArray(arr,n);
}
//One BY ONe
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
void leftRotateByOne(int arr[],int n)
{
  int temp=arr[0];
  for(int i=0;i<n-1;i++)
    arr[i]=arr[i+1];
  arr[n-1]=temp;
}
void leftRotate(int arr[],int n,int d)
{
	for(int i=0;i<d;i++)
    leftRotateByOne(arr,n);
}
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
  leftRotate(arr,n,2);
	printArray(arr,n);
}
//By subset
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int getGCD(int a,int b)
{
  if(b==0)
    return a;
  return getGCD(b,a%b);
}
void leftRotate(int arr[],int n,int d)
{
  d=d%n;
  int gcd=getGCD(d,n);
  for(int i=0;i<gcd;i++)
  {
    int temp=arr[i];
    int j = i;
    while(1)
    {
      int k=j+d;
      if(k>=n)
        k=k-n;
      if(k==i)
        break;
      arr[j]=arr[k];
      j=k;
    }
    arr[j]=temp;
  }
}
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
  leftRotate(arr,n,2);
	printArray(arr,n);
}