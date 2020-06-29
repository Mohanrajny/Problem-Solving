
// 33
// Implement a stack with push(), pop() and min() in O(1) time.
// https://www.geeksforgeeks.org/design-and-implement-special-stack-data-structure/

// https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/



#include <iostream>
#include <stdlib.h>
using namespace std;
class Stack
{
private:
  static const int max = 100;
  int arr[max];
  int top;

public:
  Stack() { top = -1; }
  void push(int x);
  int pop();
  bool isEmpty();
  bool isFull();
};
bool Stack::isEmpty()
{
  return top == -1 ? true : false;
}
bool Stack::isFull()
{
  return top == max - 1 ? true : false;
}
void Stack::push(int x)
{
  if (isFull())
  {
    cout << "Stack overflow!!";
    abort();
  }
  arr[++top] = x;
}
int Stack::pop()
{
  if (isEmpty())
  {
    cout << "Stack underflow!!";
    abort();
  }
  return arr[top--];
}
class SpecialStack : public Stack
{
private:
  Stack min;

public:
  void push(int x);
  int pop();
  int getMin();
};
void SpecialStack::push(int x)
{
  if (isEmpty())
  {
    Stack::push(x);
    min.push(x);
  }
  else
  {
    Stack::push(x);
    int y = min.pop();
    min.push(y);
    min.push(x < y ? x : y);
  }
}
int SpecialStack::pop()
{
  min.pop();
  return Stack::pop();
}
int SpecialStack::getMin()
{
  int x = min.pop();
  min.push(x);
  return x;
}
int main()
{
  SpecialStack s;
  s.push(10);
  s.push(20);
  s.push(15);
  s.push(5);
  cout << s.getMin() << endl;
  s.push(2);
  cout << s.getMin();
  return 0;
}
//Optimized
#include<iostream>
#include<stdlib.h>
using namespace std;
class Stack{
  private:
    static const int max=100;
    int arr[max];
    int top;
  public:
    Stack(){top=-1;}
    void push(int x);
    int pop();
    bool isEmpty();
    bool isFull();
};
bool Stack::isEmpty(){
  return top==-1 ? true:false;
}
bool Stack::isFull(){
  return top==max-1 ? true : false;
}
void Stack::push(int x){
  if(isFull()){
    cout<<"Stack overflow!!";
    abort();
  }
  arr[++top]=x;
}
int Stack::pop(){
  if(isEmpty()){
    cout<<"Stack underflow!!";
    abort();
  }
  return arr[top--];
}
class SpecialStack:public Stack{
  private:
    Stack min;
  public:
    void push(int x);
    int pop();
    int getMin();
};
void SpecialStack::push(int x){
  if(isEmpty()){
    Stack::push(x);
    min.push(x);
  }
  else{
    Stack::push(x);
    int y=min.pop();
    min.push(y);
    if(x<=y)
      min.push(x);
  }
}
int SpecialStack::pop(){
  int x=Stack::pop();
  int y=min.pop();
  if(x!=y)
    min.push(y);
  return x;
}
int SpecialStack::getMin(){
  int x=min.pop();
  min.push(x);
  return x;
}
int main(){
  SpecialStack s;
  s.push(10);
  s.push(20);
  s.push(15);
  s.push(5);
  cout<<s.getMin()<<endl;
  s.push(2);
  cout<<s.getMin();
  return 0;
}