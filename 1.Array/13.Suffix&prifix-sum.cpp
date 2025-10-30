#include <iostream>
using namespace std;
int main(){

    cout<<"Enter the length of array: ";
    int length;
    cin>>length;
    int array[length];
    int prefix[length];
    int suffix[length];

    cout<<"Enter the elements: ";
    for(int i=0; i<length; i++){
        cin>>array[i];
    }

    prefix[0] = array[0];
    for(int i=1; i<length; i++){
        prefix[i] = prefix[i-1] + array[i];
    }

    suffix[length-1] = array[length-1];
    for(int i=length-2; i>=0; i--){
        suffix[i] = suffix[i+1] + array[i];
    }

    cout<<"Array after prefix sum: ";
    for(int i=0; i<length; i++){
        cout<<prefix[i]<<" ";
    }
    
    cout<<endl;
    cout<<"Array after suffix sum: ";
    for(int i=0; i<length; i++){
        cout<<suffix[i]<<" ";
    }
    return 0;
}