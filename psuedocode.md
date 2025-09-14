BEGIN

    // Declare variables
    DECLARE maxCredit AS REAL
    DECLARE creditUsed AS REAL
    DECLARE availableCredit AS REAL

    // Ask for user input
    PRINT "Enter the customer's maximum amount of credit: "
    INPUT maxCredit

    PRINT "Enter the amount of credit the customer has used: "
    INPUT creditUsed

    // Calculate available credit
    availableCredit = maxCredit - creditUsed

    // Display the result
    PRINT "The customer's available credit is: ", availableCredit

END