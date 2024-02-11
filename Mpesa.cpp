

//Code with Mr.Hope
//Lets Clone Mpesa

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // current date and time on the current system
    time_t now = time(0);
    // convert now to string form
    char* date_time = ctime(&now);

    int phone;
    int withdraw;
    int amount;
    int pin;
    float transaction = 0.00;
    int confirm;

    int agent;
    int store;

    int option;
    int wOption;
    int aOption;
    
     
    cout << "1. " << "Send Money" << endl;
    cout << "2. " << "Withdraw Cash" << endl;
    cout << "3. " << "Buy Airtime" << endl;
    cout << "4. " << "Loans and Saving" << endl;
    cout << "5. " << "Lipa na M-PESA" << endl;
    cout << "6. " << "My Account" << endl;
    cin >> option;
    
    
     //OPTIONS
    switch (option) {
        //1. SEND MONEY 
    case 1: {
        cout << "\nEnter phone no." << endl;
        cin >> phone;
        cout << "Enter amount." << endl;
        cin >> amount;
        cout << "Enter Mpesa pin." << endl;
        cin >> pin;

        //confirmation
        cout << "\n\n+2547" << phone << " Will receive " << amount << "/= " << " Transaction cost Kshs: " << transaction << ".00 " << "To Continue reply with 1 to STOP reply with 2." << endl;
        cout << "1." << "Yes" << endl;
        cout << "2." << "No" << endl;
        cin >> confirm;

        //Send money confirmation options
        if (confirm == 1) {
            cout << "\nRGRYGRBJC" << " Confirmed. Ksh." << amount << ".00 " << "sent to +254" << phone << " on " << date_time << endl;
        }

        else {
            cout << "Transaction CANCELLED Successfully" << endl;
        }

        break;
    }

    //2. WITHDRAW  CASH

    case 2: {
        //Cash Withdrawal options
        cout << "1. " << "From Agent" << endl;
        cout << "2. " << "From ATM" << endl;
        cin >> wOption;

        switch (wOption) {

        case 1: { //Withdraw from Agent.

            cout << "1. " << "Enter agent no." << endl;
            cin >> agent;
            cout << "2. " << "Enter store no." << endl;
            cin >> store;
            cout << "Enter amount." << endl;
            cin >> amount;
            cout << "2. " << "Enter Mpesa pin." << endl;
            cin >> pin;

            //Confirmation 
            cout << "\nWithdraw Kshs " << amount << "/= from " << agent << " Transaction cost Kshs: " << transaction << ".00 " << "To Continue reply with 1 to STOP reply with 2." << endl;
            cout << "1." << "Yes" << endl;
            cout << "2." << "No" << endl;
            cin >> confirm;


            //For Agent confirmation withdrawal options output 
            if (confirm == 1) {

                cout << "R444GDDFHJS" << " Confirmed your  have withdrawn " << "Kshs " << amount << "/=" << " From " << agent << endl;

            }
            else {

                cout << "Withrawal of Kshs " << amount << "/= " << "From " << agent << " was Successfully CANCELLED" << endl;

            }

            break;
        }


        case 2: {//Withdraw from ATM

            cout << "1. " << "Enter agent no." << endl;
            cin >> agent;
            cout << "Enter amount." << endl;
            cin >> amount;
            cout << "2. " << "Enter Mpesa pin." << endl;
            cin >> pin;

            //Confirmation 
            cout << "\nWithdraw Kshs " << amount << "/= from " << agent << " Transaction cost Kshs: " << transaction << ".00 " << "To Continue reply with 1 to STOP reply with 2." << endl;
            cout << "1." << "Yes" << endl;
            cout << "2." << "No" << endl;
            cin >> confirm;

            //For ATM confirmation option output
            if (confirm == 1) {
                cout << "R444GDDFHJS" << " Confirmed your  have withdrawn " << "Kshs " << amount << "/=" << " From " << agent << endl;
            }

            else {

                cout << "Withrawal of Kshs " << amount << "/= " << "From " << agent << " was Successfully CANCELLED" << endl;

            }

            break;
        }

        // CASH WITHDRAWAL AFTER INCORRECT  INPUT
        default: {
            cout << "Invalid option try again!\n";
            cout << "1. " << "From Agent" << endl;
            cout << "2. " << "From ATM" << endl;
            cin >> wOption;

            if (wOption == 1) {//AGENT
                cout << "1. " << "Enter agent no." << endl;
                cin >> agent;
                cout << "2. " << "Enter store no." << endl;
                cin >> store;
                cout << "Enter amount." << endl;
                cin >> amount;
                cout << "2. " << "Enter Mpesa pin." << endl;
                cin >> pin;
            }
            // CONFIRMATION 
            cout << "\nWithdraw Kshs " << amount << "/= from " << agent << " Transaction cost Kshs: " << transaction << ".00 " << "To Continue reply with 1 to STOP reply with 2." << endl;
            cout << "1." << "Yes" << endl;
            cout << "2." << "No" << endl;
            cin >> confirm;

            //Confirmation options output
            if (confirm == 1) {
                cout << "R444GDDFHJS" << " Confirmed your  have withdrawn " << "Kshs " << amount << "/=" << " From " << agent;
            }

            else {

                cout << "Withrawal of Kshs " << amount << "/= " << "From " << agent << " was Successfully CANCELLED";

            }

            //ATM options after invalid entry
            if (wOption == 2) {
                cout << "1. " << "Enter agent no." << endl;
                cin >> agent;
                cout << "Enter amount." << endl;
                cin >> amount;
                cout << "2. " << "Enter Mpesa pin." << endl;
                cin >> pin;

                // Confirmation
                cout << "\nWithdraw Kshs " << amount << "/= from " << agent << " Transaction cost Kshs: " << transaction << ".00 ";
            }
        }//default wOption 
       break;
     }//woption
     
    break;
   }//case2 Option
   
   
                //BUY AIRTIME
   case 3:{//case3 option
   
        cout<<"1 My Phone"<<endl;
        cout<<"2. Other Phone"<<endl;
        cin>>aOption;
        
        if(aOption == 1){
        cout << "Enter amount." << endl;
        cin >> amount;
        cout << "2." << "Enter Mpesa pin." << endl;
        cin >> pin;
        }
        
   break;
   }//case3 option
   default:{//default option
   cout<<"Invalid input try again later";
   break;
   }
  }//option
  
    return 0;
}
