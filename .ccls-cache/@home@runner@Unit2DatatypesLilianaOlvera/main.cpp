// Liliana Olvera COSC-1436-57002 Dev C++
// This program allows the user to enter the amount of pennies they have and the program will calculate the number of dollars, quarters, dimes, nickels, and pennies that makes up.

#include <iostream>
using namespace std;


int main() {
    
    //declare variables
    
    int dollar_amt;
    int dollar_rem;
    
    int input;
    
    //accept input
    cout<<"Please enter the pennies to be converted ";
    cin>>input;
    
    //process input
    dollar_amt = input/100;
    dollar_rem = input%100;
    
    int quarter_amt = dollar_rem/25;
    int quarter_rem = dollar_rem%25;
    
    
    int dime_amt = quarter_rem/10;
    int dime_rem = quarter_rem%10;
    
    int nickel_amt = dime_rem/5;
    int nickel_rem = dime_rem%5;
    
    int pennies_amt = nickel_rem;
    
    
    
    
    //display output    
   cout<<"The dollar amount is = "<<dollar_amt<<endl;
    //cout<<"The dollar remainder is = "<<dollar_rem<<endl;
    
   cout<<"The quarter amount is = "<<quarter_amt<<endl;
	//cout<<"The quarter remainder is = "<<quarter_rem<<endl;
    
   cout<<"The dime amount is = "<<dime_amt<<endl;
    //cout<<"The dime remainder is = "<<dime_rem<<endl;
    
    cout<<"The nickel amount is = "<<nickel_amt<<endl;
    //cout<<"The nickel remainder is = "<<nickel_rem<<endl;
    
    cout<<"The pennies amount is = "<<pennies_amt<<endl;
    //cout<<"The penies left over is = "<<pennies_amt<<endl;
    
    
    
    return 0;
}