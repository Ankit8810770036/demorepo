#include <iostream>
#include <stack>
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
    stack<Myobject> mystack;

    mystack.emplace("Ankit", 20);
    mystack.emplace("Amit", 15);
    mystack.emplace("Raman", 21);
    
    cout<<mystack.top().name; // output: Ankit

}