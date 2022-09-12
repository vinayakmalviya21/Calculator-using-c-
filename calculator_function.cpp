// Calculator using function
#include<iostream>
#include<math.h>
using namespace std; 

float a;

float add(int b){
    a = a+b;
    return a;
}

float subtract(int b){
    a = a-b;
    return a;
}

float multiply(int b){
    a = a*b;
    return a;
}

float divide(int b){
    a = a/b;
    return a;
}

float power(int b){
    a = pow(a,b);
    return a;
}

int main(){
cout<<"Calculator for using basic operations"<<endl;
float b;
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
        cout<<add(b)<<endl;
        break;
    case '-':
        cout<<"Answer: ";
        cout<<subtract(b)<<endl;
        break;
    case '*':
        cout<<"Answer: ";
        cout<<multiply(b)<<endl;
        break;
    case '/':
        cout<<"Answer: ";
        cout<<divide(b)<<endl;
        break;
    case '^':
        cout<<"Answer: ";
        cout<<power(b)<<endl;
        break;
    }
}

return 0;
}