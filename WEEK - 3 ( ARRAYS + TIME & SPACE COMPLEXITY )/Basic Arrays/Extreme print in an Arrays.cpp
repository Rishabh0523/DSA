#include <iostream>
using namespace std;

void extremePrintArray(int arr[], int size){
    int left =0;
    int right = size-1;
    
    while(left<=right){
        cout<<arr[left]<<endl;
        cout<<arr[right]<<endl;
        left++;
        right--;
    }
    
    
}


int main()
{
   int arr[6]={1,2,3,4,5,6};
   int size=6;

   extremePrintArray(arr,size);
    return 0 ;

}

// For Odd

#include <iostream>
using namespace std;

void extremePrintArray(int arr[], int size){
    int left =0;
    int right = size-1;
    
    while(left<=right){
        if(left == right){
        cout<<arr[left]<<endl;
        }
        
        else{
        cout<<arr[left]<<endl;
        cout<<arr[right]<<endl;   
        }
       
        left++;
        right--;
    }
    
    
}


int main()
{
   int arr[6]={1,2,3,4,5,6};
   int size=6;

   extremePrintArray(arr,size);
    return 0 ;

}