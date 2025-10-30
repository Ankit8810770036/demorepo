#include <iostream>
#include <queue>
using namespace std;
// Note: enqueue(add) and dequeue(remove) are not keywords.
/*
1. Queue_name.front() -> used to get top element 
2. Queue_name.back() -> used to get last element 
3. Queue_name.pop() -> used to delete top element 
4. Queue_name.empty() -> used to check queue is empty or not  
5. Queue_name.size() -> used to get the length of queue 
6. Queue_name.swap() -> used to exchange the value of two queues
7. Queue_name.push() -> used to insert the value in queue
8. Queue_name.emplace() -> to know about it check emplace file..
*/
int main(){
    queue<int>  myqueue;
    cout<<"Enter the elements: ";
    int value;
    while(true){
        cin>>value;
        if(value == -1) break;
        myqueue.push(value);
    
    }
    queue<int> tempqueue = myqueue;
    cout<<"Your entered elements are: ";
    while(!tempqueue.empty()){
        cout<<tempqueue.front()<<" ";
        tempqueue.pop();
    }

    cout<<endl<<myqueue.back()<<endl;
    cout<<myqueue.size()<<endl;
    myqueue.swap(tempqueue); // or swap(myqueue, tempqueue);
    
}