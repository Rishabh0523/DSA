#include <iostream>
#include<vector>
using namespace std;


int main()
{
    
    vector<int>arr{10,20,30,40};
    int sum = 80;
    
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
            
            if(element + arr[j] + arr [k] == sum){
            cout<<"Pairs Founds "<<element<<","<<arr[j] <<","<<arr[k]<<endl;
                
            }
            
            }
        }
    }
   
  
    return 0 ;

}