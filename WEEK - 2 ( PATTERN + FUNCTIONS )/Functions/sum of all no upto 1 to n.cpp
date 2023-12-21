#include<iostream>
using namespace std;

void findSumUptoN(int num){
   int sum=0;
   
   for(int i=0; i<=num;i++){
       sum = sum+i;
   }
   cout<<"Sum is "<<sum<<endl;
}

int main()
{
    
 findSumUptoN(10);
 
}