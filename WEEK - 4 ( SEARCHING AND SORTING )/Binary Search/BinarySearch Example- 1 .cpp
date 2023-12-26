#include<iostream>
using namespace std;


int binarySearch(int arr[] , int target , int n){
    int start=0;
    int end= n-1;
    int mid = (start+end)/2;
    
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        
       else if(target>arr[mid]){
            start = mid+1;
        }
        
        else if (target<arr[mid]){
            end = mid-1;
        }
        
        // mid update
        
        mid = (start + end )/2;
    }
    
    // agar yaha tak kuch nhi mila toh mtlb target present nhi h toh return -1 kr do;
    
    return -1;
    
}


int main()
{
    
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target = 90;
    int n=9;
    
    int ansIndex= binarySearch(arr,target,n);
    if(ansIndex == -1){
        cout<<"Element not found "<<endl;
    }
    
    else{
        cout<<"Element found at : "<<ansIndex<<endl;
    }
}