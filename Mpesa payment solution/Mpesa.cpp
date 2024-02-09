/*Code with Mr.Hope*/
//Lets Clone Mpesa using C++
#include <iostream>
#include <ctime>
 using namespace std;

 int main(){    

    // current date and time on the current system
    time_t now = time(0);
    // convert now to string form
    char* date_time = ctime(&now);

    int phone;
    int withdraw;
    int amount;
    int pin;
    int transaction = 0.00;
    int confirm;

     int agent;
     int store;

     int option;
     int wOption;
     
     cout<<"1. "<<"Send Money"<<endl;
     cout<<"2. "<<"Withdraw Cash"<<endl;
     cout<<"3. "<<"Buy Airtime"<<endl;
     cout<<"4. "<<"Loans and Saving"<<endl;
     cout<<"5. "<<"Lipa na M-PESA"<<endl;
     cout<<"6. "<<"My Account"<<endl;
     cin>>option;

     switch(option){
             //Send money
             case 1:
                cout<<"\n\nEnter phone no."<<endl;
                cin>>phone;
                cout<<"Enter amount."<<endl;
                cin>>amount; 
                cout<<"Enter Mpesa pin."<<endl;
                cin>>pin; 

           cout<<"\n\n+2547"<<phone<<" Will receive "<<amount<<"/=" <<" Transaction cost Kshs: "<<transaction<<".00 " <<"To Continue reply with 1 to STOP reply with 2."<<endl;
           cout<<"1."<<"Yes"<<endl;
           cout<<"2."<<"No"<<endl;
           cin>>confirm;
           
           if (confirm == 1){
            cout<<"\nRGRYGRBJC" <<" Confirmed. Ksh."<<amount<<".00 "<<"sent to "<<phone <<" on " <<date_time<<endl;
           }
     break;
                
         case 2:
                  cout<<"1. " <<"From Agent"<<endl;
                  cout<<"1. " <<"From ATM"<<endl;
                  cin>>wOption;

                  //Agent/ATM withdrawal
                  if(wOption == 1){//AGENT
                     cout<<"1. " <<"Enter agent no."<<endl;
                     cin>>agent;
                    cout<<"2. " <<"Enter store no."<<endl;
                     cin>>store;
                     cout<<"2. " <<"Enter Mpesa pin."<<endl;
                     cin>>pin;
                  }
                  else if(wOption == 2){ 
                     cout<<"1. " <<"Enter agent no."<<endl;
                     cin>>agent;                     
                    cout<<"2. " <<"Enter Mpesa pin."<<endl;
                    cin>>pin;
                  }
                  else{          //Logical gate for withdrawal options
                  cout<<"Invalid input try again\n";
                  cout<<"1. " <<"From Agent"<<endl;
                  cout<<"2. " <<"From ATM"<<endl;
                  cin>>wOption;
                  }
           break;
                
     }   

           //                   
     return 0;
     }
