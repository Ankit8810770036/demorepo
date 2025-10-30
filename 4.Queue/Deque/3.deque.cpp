#include <iostream>
#include <deque>
using namespace std;
// the main difference in Queue and Deque is:
// Deque(double ended queue) -> means we can perform insertion & deletion from both side(front & back) 
int main(){
    deque<int> mydeque;
    
    int value;
    while(true){
        cin>>value;
        if(value == -1) break;
        mydeque.push_front(value);
    }
    deque<int> copied = mydeque;
    while(!copied.empty()){
        cout<<copied.front()<<" ";
        copied.pop_front();
    }

    mydeque.assign(2, 20);    
    cout<<mydeque.at(3);
    cout<<mydeque.back();
    mydeque.begin();
    mydeque.cbegin();
    mydeque.cend();
    mydeque.end();

}