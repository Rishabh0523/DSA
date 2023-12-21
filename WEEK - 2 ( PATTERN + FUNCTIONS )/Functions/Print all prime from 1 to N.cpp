#include<iostream>
using namespace std;

bool checkPrimeNumber(int num){
    
    int i=2;
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    
    return true;
}

int main()
{
    int num;
    cin>>num;
    
    for(int i=2;i<=num;i++){
    
 bool prime =checkPrimeNumber(i);
 
 if(prime){
     cout<<"It's a prime number "<<i<<endl;
 }

    }
 
}