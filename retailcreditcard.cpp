// Using page 142 in your textbook, you will complete number 25 in the algorithm workbench.

// You will submit screenshots of the pseudocode and running program in C++, compiled in a single word document and submit your completed assignment to the above submission link by 11:59 p.m. EST, Sunday of Unit 3.

// BEGIN

//     // Declare variables
//     DECLARE maxCredit AS REAL
//     DECLARE creditUsed AS REAL
//     DECLARE availableCredit AS REAL

//     // Ask for user input
//     PRINT "Enter the customer's maximum amount of credit: "
//     INPUT maxCredit

//     PRINT "Enter the amount of credit the customer has used: "
//     INPUT creditUsed

//     // Calculate available credit
//     availableCredit = maxCredit - creditUsed

//     // Display the result
//     PRINT "The customer's available credit is: ", availableCredit

// END

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables
    double maxCredit;
    double creditUsed;
    double availableCredit;

    // Ask for user input
    cout << "Enter the customer's maximum amount of credit: ";
    cin >> maxCredit;

    cout << "Enter the amount of credit the customer has used: ";
    cin >> creditUsed;

    // Calculate available credit
    availableCredit = maxCredit - creditUsed;

    // Display the result
    cout << fixed << setprecision(2); // display two decimal places
    cout << "The customer's available credit is: $" << availableCredit << endl;

    return 0;
}