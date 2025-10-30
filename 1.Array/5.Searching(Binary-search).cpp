#include <iostream>
using namespace std;
int main(){

    cout<<"Enter the length of array: ";
    int length;
    cin>>length;
    int array[length];
    
    cout<<"Enter the elements in Sorted Order: ";
    for(int i=0; i<length; i++){
        cin>>array[i];
    }

    cout<<"Enter the element you want to Search: ";
    int keyelement;
    cin>>keyelement;

//  Binary search 

    int left = 0;
    int right = length-1;
    int index = -1;
    
    while(left <= right){
        int mid = left + ((right - left)/2);
        if(array[mid] == keyelement){
            index = mid;
            break;
        }
        else if(array[mid] > keyelement){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }

    if(index == -1){
        cout<<"Your key element is not present in this array.";
    }else{
        cout<<"Your key element is found at "<<(index+1)<<" position.";
    }

    return 0;
}