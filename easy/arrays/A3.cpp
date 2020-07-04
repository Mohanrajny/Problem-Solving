#include<bits/stdc++.h>
using namespace std;
void printSubSet(char *str,int n)
{
    for(int i=0;i <1<<n;i++)
    {
        cout<<"{";
        for(int j=0;j<n;j++)
        {
            if((i & (1<<j)) >0)
                cout<<str[j]<<" ";
        }
        cout<<"}"<<endl;
    }
}
int main()
{
    char str[]={'a','b','c'};
    int size=sizeof(str)/sizeof(str[0]);
    printSubSet(str,size);
}