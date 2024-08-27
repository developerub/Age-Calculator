//Created by ubaid...
#include <iostream>
using namespace std;

int main() {
    // Declaring variables
    int birthday; // stores birthday value
    int birthmonth; // stores birthmonth value
    int birthyear;  // stores birthyear value
    int presentday; // stores birthday value
    int presentmonth; // stores birthday value
    int presentyear; // stores birthday value
    
    // Storing user input in variables
    
    cout<<"Enter Present day:"<<endl;  
    cin>>presentday;
    cout<<"Enter Present Month:"<<endl;
    cin>>presentmonth;
    cout<<"Enter Present Year:"<<endl;
    cin>>presentyear;
    cout<<"Enter Birth day:"<<endl;
    cin>>birthday;
    cout<<"Enter Birth Month:"<<endl;
    cin>>birthmonth;
    cout<<"Enter Birth Year:"<<endl;
    cin>>birthyear;
    // Checking if the given input is according to the date time format.
    
    if((presentday > 31 || presentday <= 0) || (birthday > 31 || birthday <= 0) || (presentmonth > 12 || presentmonth <= 0 ) || (presentyear < birthyear) || (presentyear == 0 || birthyear == 0)){
        
        cout<<"You have entered some thing wrong";
    }
    else{
        if(presentday>=birthday){
            int resultday = presentday - birthday;
        }
        else{
             presentday = presentday + 30;
             presentmonth -- ;   //one month have been deducted
          
        }
        if(presentmonth>=birthmonth){
            int resultmonth = presentmonth - birthmonth;
        }
        else{
            presentmonth = presentmonth + 12;
            presentyear -- ;   // one year have been deducted
            
        }
            int   resultday = presentday - birthday;
            int   resultmonth = presentmonth - birthmonth;
            int   resultyear = presentyear - birthyear;
        
        cout<<"You are "<< resultyear<<" years "<<resultmonth<<" months and "<<resultday<<" days old ";
    }
  

    return 0;
}