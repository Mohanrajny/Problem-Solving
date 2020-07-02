
// 2
// Largest Sum Contiguous Subarray
 
// https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/



#include<bits/stdc++.h>
using namespace std;
int kadanesAlgorithm(int arr[],int arr_size)
{
  int max_so_far=0,max_ending_here=0;
  for(int i=0;i<arr_size;i++)
  {
    max_ending_here = max_ending_here + arr[i]; 
    if(max_ending_here<0)
      max_ending_here=0;
    else if(max_so_far<max_ending_here)
      max_so_far=max_ending_here;
  }
  return max_so_far;
}
int main()
{
  int arr[]= {-2, -3, 4, -1, -2, 1, 5, -3}; 
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<kadanesAlgorithm(arr,n);
}

//Optimized
#include<bits/stdc++.h>
using namespace std;
int kadanesAlgorithm(int arr[],int arr_size)
{
  int max_so_far = arr[0], curr_max=arr[0];
  for(int i=1;i<arr_size;i++)
  {
    curr_max = max(arr[i],curr_max+arr[i]);
    max_so_far=max(max_so_far,curr_max);
  }
  return max_so_far;
}
int main()
{
  int arr[]= {-2, -3, 4, -1, -2, 1, 5, -3}; 
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<kadanesAlgorithm(arr,n);
}