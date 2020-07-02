
// 1
// Find the Number Occurring Odd Number of Times


// https://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/



#include<bits/stdc++.h>
using namespace std;
int findNoOfOccurence(int arr[],int arr_size)
{
  int i;
  for(i=0;i<arr_size;i++)
  {
    int count=0;
    for(int j=0;j<arr_size;j++)
    {
      if(arr[i]==arr[j])
        count++;
    }
    if(count%2!=0)
      break;
  }
  return arr[i];
}
int main()
{
  int arr[] = {1,2,1,4,2,1,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<findNoOfOccurence(arr,n);
}

//Using hash
#include<bits/stdc++.h>
using namespace std;

int getNoOfOccurence(int arr[],int arr_size)
{
  unordered_map<int,int> hash;
  for(int i=0;i<arr_size;i++)
  {
    hash[arr[i]]++;
  }
  for(auto i: hash)
  {
    if(i.second%2 != 0)
      return i.first;
  }
  return -1;
}

int main()
{
  int arr[]={1,2,1,2,1};
  cout<<getNoOfOccurence(arr,sizeof(arr)/sizeof(arr[0]));
  return 0;
}