#include<iostream>  
using namespace std;    
void swap(int x, int y)  
{  
 int swap;  
 swap=x;  
 x=y;  
 y=swap;  
}  
int main()   
{    
 int a=5, b=2;    
 swap(a, b);  // passing value to function  
 cout<<"Value of a is: "<<a<<endl;  
 cout<<"Value of b is: "<<b<<endl;  
 return 0;  
} 

/*
output:
Value of a is: 5
Value of b is: 2
*/
