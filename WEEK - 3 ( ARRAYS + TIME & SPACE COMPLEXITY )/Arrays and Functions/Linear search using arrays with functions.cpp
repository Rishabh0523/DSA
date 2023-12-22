#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size,int target){
    
    for(int i=0;i<size;i++){
    if(arr[i]==target){
        return true;
        break;
    }
    
    }
    
    return false;
}

int main()
{
    int arr[5]={2,4,5,6,7};
    int size=5;
    int target = 0;

   bool ans =linearSearch(arr,size,target);
   

   if(ans==1){
       cout<<"Target found "<<endl;
       
   }
   
   else{
       cout<<"Target not found "<<endl;
   }
     
    return 0 ;

}