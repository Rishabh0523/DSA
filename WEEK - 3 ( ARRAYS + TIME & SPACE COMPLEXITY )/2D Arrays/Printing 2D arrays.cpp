#include <iostream>
#include<vector>
using namespace std;

// Row wise print 

void printArray(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             cout<<arr[i][j]<<" ";
        }
         cout<<endl;
    }
    
  
}

int main()
{
    int arr[3][4] ={
        {1,2,3,5},
        {5,6,7,9},
        {3,5,4,9}
    };
    
    int row=3;
    int col=4;
    
    printArray(arr,row,col);

    
   return 0;
}
   
   // Colomun wise print 

#include <iostream>
#include<vector>
using namespace std;


void printArray(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
             cout<<arr[j][i]<<" ";
        }
         cout<<endl;
    }
    
  
}

int main()
{
    int arr[3][4] ={
        {1,2,3,5},
        {5,6,7,9},
        {3,5,4,9}
    };
    
    int row=3;
    int col=4;
    
    printArray(arr,row,col);

    
   return 0;
}
   
  