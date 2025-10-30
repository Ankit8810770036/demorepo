#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Myobject{
    string name;
    int age;

    Myobject(string n, int a) : name(n), age(a){
        cout<<"Myobject Constructed : "<<name<<", "<<age<<endl;
    }
};
int main(){
    queue<Myobject> myqueue;

    myqueue.emplace("Ankit", 20);
    myqueue.emplace("Amit", 15);
    myqueue.emplace("Raman", 21);
    
    cout<<myqueue.front().name; // output: Ankit

}