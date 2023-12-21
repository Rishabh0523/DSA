#include<iostream>
using namespace std;

int maxNumber(int a , int b, int c){
 if(a>b && a> c){
     return a;
 }
 
 else if(b>a && b> c){
     return b;
 }
        
        else{
            return c;
        }
    
}

int main()
{
    
  int sum =maxNumber(7,49,6);
  cout<<sum;

}


// 2nd way 

#include<iostream>
using namespace std;

int maxNumber(int a , int b, int c){
 int ans1=max(a,b);
 int finalAns= max(ans1,c);
 
 return finalAns;
}

int main()
{
    
 int max= maxNumber(7,0,6);
cout<<max;

}