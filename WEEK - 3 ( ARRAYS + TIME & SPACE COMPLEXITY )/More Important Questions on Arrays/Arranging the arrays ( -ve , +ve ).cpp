#include<iostream>
#include<vector>
using namespace std;

void shiftNegativeoneSide(int arr[] , int n){
    int j=0;
    
    for(int index=0;index<n;index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
}


int main()
{
    
    int arr[]={23,-5,9,-8,-11,45,65,-3};
    int n=7;
    
    
    shiftNegativeoneSide(arr,n);
    
    cout<<"Printing the values "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}