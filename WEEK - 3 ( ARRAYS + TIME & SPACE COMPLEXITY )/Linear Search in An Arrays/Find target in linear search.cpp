#include <iostream>
using namespace std;

int main()
{
    int arr[5]={2,4,5,6,7};
    int target=6;
    int n=5;
    
    
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