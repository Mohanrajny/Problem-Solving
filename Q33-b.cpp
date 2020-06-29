
// 33
// Implement a stack with push(), pop() and min() in O(1) time.
// https://www.geeksforgeeks.org/design-and-implement-special-stack-data-structure/

// https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/


#include<bits/stdc++.h>
using namespace std;
struct MyStack
{
  stack<int> s;
  int minEle;
  void getMinEle()
  {
    if(s.empty())
    {
      cout<<"Stack is empty..\n";
      return;
    }
    cout<<"Minium Element : "<<minEle<<endl;
  }
  void peek()
  {
    if(s.empty())
    {
      cout<<"Stack is empty..\n";
      return;
    }
    cout<<"Top Element : ";
    int t = s.top();
    (t<minEle) ? cout<<minEle : cout<<t;
    cout<<endl;
  }
  void push(int x)
  {
    cout<<"Inserted :"<<x<<endl;
    if(s.empty())
    {
      s.push(x);
      minEle=x;
    }
    else
    {
      if(x<minEle)
      {
        s.push(2*x-minEle);
        minEle=x;
      }
      else
      {
        s.push(x);
      }
    }
  }
  void pop()
  {
    if(s.empty())
    {
      cout<<"Stack underFlow"<<endl;
      return;
    }
    int t = s.top();
    cout<<"Popped element :";
    s.pop();
    if(t<minEle)
    {
      cout<<minEle<<endl;
      minEle = 2*minEle - t;
    }
    else
      cout<<t<<endl;   
  }
};
int main()
{
  MyStack s;
  s.push(23);
  s.push(13);
  s.push(19);
  s.getMinEle();
  s.peek();
  s.pop();
  s.getMinEle();
  s.pop();
  s.peek();
  s.getMinEle();
  s.pop();
  s.getMinEle();
  return 0;
}