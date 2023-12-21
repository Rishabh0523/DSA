#include<iostream>
using namespace std;

long long int FactorialOfNumber(long long int n){
    long long int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        
    }
    
    return fact;
}

int main()
{
    
int n;
cin>>n;

long long int ans = FactorialOfNumber(n);
cout<<"Factorial of number is "<<ans;
   
}