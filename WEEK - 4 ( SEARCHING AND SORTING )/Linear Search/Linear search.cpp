#include <iostream>
using namespace std;

int main()
{
    int arr[7]={2,4,5,6,7,8,9};
    int target=8;
    int n=7;
    
    
    bool flag=0;
    
    
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            flag=1;
            break;
        }
    }
    
    if(flag == 1){
      cout<<"Found "<<endl;
    }
    
    else {
      cout<<"Not Found "<<endl;
    }
    
     
    return 0 ;

}