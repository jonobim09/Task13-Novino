/******************************************************************************

Programmed by: Jolly Novino
Date Accomplished: May 26, 2022

//This program demonstrates another functions to calculate
//the gross weekly pay of hourly-paid or salaried employees.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;


//Function Prototypes
void getChoice(char &);
double calcWeeklyPay(int hours, double rate);
double calcAnnualpay(double yearly);



int main()
{
    char selection; //Menu selection
    int worked; //Hours worked
    double rate; //Hourly pay rate
    double yearly; //Yearly Salary
    
    //Set Numeric output formatting.
    cout << fixed << showpoint << setprecision(2);
    
    //call getChoice
    getChoice(selection);

    
    //Display the menu and get a selection.
    switch (selection)
    {
        //Hourly-paid employee
        case 'H' :
        case 'h' : cout << "How many hours were worked? ";
                   cin >> worked;
                   cout << "What is the hour pay rate? ";
                   cin >> rate;
                   cout << "The gross weekly pay is $";
                   cout << calcWeeklyPay(worked, rate)<<endl;
                   break;
                
        //Salaried employee
        case 'S' :
        case 's' : cout <<"What is the annual salary?";
                   cin >> yearly;
                   cout << "The gross weekly pay is $";
                   cout << calcAnnualpay(yearly) <<endl;
                   break;
        
        
    }
    return 0;
}

/******************************************************************************
//Definition of Function getChoice
//The parameter letter is a reference to a char.
//This function asks the user for an H or an S and returns
//the validated input.
*******************************************************************************/
void getChoice(char &letter)
{
    //Get the user's selection.
    cout <<"Enter your choice (H or S): ";
    cin >> letter;
    
    //Validate the selection.
    while (letter != 'H' && letter != 'h' &&
        letter !='S' &&  letter != 's')
        
    {
        cout <<"Please enter H or S: ";
        cin>> letter;
    }
}

/******************************************************************************
//Definition of overloaded function calcWeeklyPay.
//This function calculates the gross weekly pay of
//an hourly-paid employee. The parameter hours holds the 
//number of hours worked. The parameter rate holds The
//hoourly pay rate. The function returns the weekly salary.
*******************************************************************************/

double calcWeeklyPay(int hours, double rate)
{
    return hours * rate;
}

/******************************************************************************
//Definition of Function calcAnnualpay.
//This function calculates the gross weekly pay of
//a salaried employee. The parameter holds the employee's
//annual salary. The function returns the weekly salary.
*******************************************************************************/

double calcAnnualpay(double yearly)
{
    return yearly/52;
}