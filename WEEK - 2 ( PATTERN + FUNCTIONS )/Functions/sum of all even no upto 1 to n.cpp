#include<iostream>
using namespace std;

void findEvenSumUptoN(int num){
   int sum=0;
   
   for(int i=2; i<=num;i=i+2){
       sum = sum+i;
   }
   cout<<"Sum is "<<sum<<endl;
}

int main()
{
    
 findEvenSumUptoN(10);
 
}