#include<iostream>
#include<vector>
using namespace std;

void transpose(int arr[][3],int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            swap(arr[i][j], arr[j][i]);
        }
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
  
  
  cout<<"Before transpose "<<endl;
  printArray(arr,row,col);
  
  cout<<"Doing transpose "<<endl;
  transpose(arr,row,col);
  
  cout<<"After transpose "<<endl;
  printArray(arr,col,row);
    
   return 0;
}