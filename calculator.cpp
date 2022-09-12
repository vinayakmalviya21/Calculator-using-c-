// Calculator 
#include<iostream>
#include<math.h>
using namespace std; 

int main(){
cout<<"Calculator for using basic operations"<<endl;
float a,b;
char opr;
cout<<"Enter your number: ";
cin>>a;

while(1){
    cout<<"Enter operator: ";
    cin>>opr;
    if(opr == '='){
        cout<<"Result: "<<a;
        break;
    }
    cout<<"Enter your number: ";
    cin>>b;
    switch (opr)
    {
    case '+':
        cout<<"Answer: ";
        a = a+b;
        cout<<a<<endl;
        break;
    case '-':
        cout<<"Answer: ";
        a = a-b;
        cout<<a<<endl;
        break;
    case '*':
        cout<<"Answer: ";
        a = a*b;
        cout<<a<<endl;
        break;
    case '/':
        cout<<"Answer: ";
        a = a/b;
        cout<<a<<endl;
        break;
    case '^':
        cout<<"Answer: ";
        a = pow(a,b);
        cout<<a<<endl;
        break;
    }
}

return 0;
}