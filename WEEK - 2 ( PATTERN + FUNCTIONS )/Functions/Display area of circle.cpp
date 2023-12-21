#include<iostream>
using namespace std;

float areaOfCircle(float r){
    
    // float area =  3.14*r*r;
    // return area;
    
    return 3.14*r*r;
}

int main()
{
    
    
   float circle = areaOfCircle(5);
   cout<<"Area of circle is "<<circle<<endl;
 
}