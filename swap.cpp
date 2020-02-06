 #include <iostream>  
using namespace std;  
int main()  
{  
int a=5, b=10;      
cout<<"Before swap a= "<<a<<" b= "<<b<<endl;      
a=a*b; //a=60 (5*10)    
b=a/b; //b=5 (60/10)    
a=a/b; //a=10 (60/5)    
cout<<"After swap a= "<<a<<" b= "<<b<<endl;      
return 0;  
}  
