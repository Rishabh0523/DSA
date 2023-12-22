#include <iostream>
#include<limits.h>
using namespace std;

int findminimunInArray(int arr[],int size){
    
    int minAns = INT_MAX;
    
    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
        minAns = arr[i];
    }
    
    }
    
    return minAns;
};


int main()
{
   
 int arr[9]={10,8,34,5,6,7,1,2,4};
 int size=9;
  
  int minimum =findminimunInArray(arr,size);
  cout<<"Minimum number is "<<minimum<<endl;
     
    return 0 ;

}
