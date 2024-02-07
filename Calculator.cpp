#include <iostream>
using namespace std;

int main(){

    int n1,n2;
    int result;
    char op;
    
    cout<<"Enter What you want to calculate: \n";
    cin>>n1>>op>>n2;
    
    if(op == '+'){
    result = n1 + n2;
    cout <<"\n" << n1 << " + "<<n2 <<" = "<<result <<"\n";
    }
    else if(op == '-'){
    result = n1 - n2;
    cout<<"\n" << n1 << " - "<<n2 <<" = "<<result<<"\n";
    }
    else if(op == '*'){
    result = n1 * n2;
    cout<<"\n" << n1 << " x "<<n2 <<" = "<<result<<"\n";
    }
    else if(op == '/'){
    result = n1 / n2;
    cout<<"\n" << n1 << " ÷ "<<n2 <<" = "<<result<<"\n";
    }
    else if(op == '%'){
    result = n1 % n2;
    cout<<"\n" << n1 << " % "<<n2 <<" = "<<result<<"\n";
    }
    else{
    cout<<"\nInvalid Operator!\n" << "You can only use +,-,*,/ or %\n";
    }
   
    return 0;
}