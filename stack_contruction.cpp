//stack implementation using array
#include<bits/stdc++.h>
using namespace std;
struct Stack{
    int *arr;
    int capacity;
    int top;
    Stack(int c)
    {
        arr=new int[c];
        capacity=c;
        top=-1;
    }
    void push(int val)
    {
        if(top==capacity-1)
        {
            cout<<"Stack is Full"<<endl;
            
        }
        else{
        top++;
        arr[top]=val;
        }
    }
    int pop(){
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            
        }
        else{
        int temp=arr[top];
        top--;
        return temp;
        }
        return 0;
    }
    int peek(){
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
    int size(){
        return top+1;
    }
    
};
int main(){
    Stack *st=new Stack(5);
    st->push(5);
    st->push(4);
    st->push(3);
    cout<<st->peek()<<endl;
    cout<<st->pop()<<endl;
    
    cout<<st->size()<<endl;
    cout<<st->empty();
    return 0;
}
