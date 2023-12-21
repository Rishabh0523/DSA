#include<iostream>
using namespace std;

bool checkPrimeNumber(int num){
    
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    
    return true;
}

int main()
{
    
 bool prime =checkPrimeNumber(1);
 
 if(prime){
     cout<<"It's a prime number "<<endl;
 }
 
 else{
     cout<<"It's not a prime number"<<endl;
 }
 
}