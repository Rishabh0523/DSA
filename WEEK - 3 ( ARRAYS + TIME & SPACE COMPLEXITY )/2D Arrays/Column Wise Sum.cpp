#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void rowWiseSum(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
           int sum=0;
        for(int j=0;j<row;j++){
           sum = sum + arr[j][i];
          
        }
        
            cout<<sum<<endl;
    }
}


int main()
{
   int arr [3][3]={
       {2,3,5},
       {4,3,6},
       {2,5,1}
   };
   
   int row=3;
   int col=3;
   
  rowWiseSum(arr,col,row);
    
   return 0;
}