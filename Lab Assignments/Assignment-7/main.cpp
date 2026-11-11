
/**
 * @file main.cpp
 * @brief Main entry point of the application.
 *
 * This file demonstrates the usage of Logger and
 * CalculationEngine classes.
 */

#include "Logger.h"
#include "CalculationEngine.h"

#include <iostream>

using namespace std;

/**
 * @brief Main function of the application.
 *
 * Creates a Logger and CalculationEngine object,
 * performs a power calculation and displays the result.
 *
 * @return 0 if the program executes successfully.
 */
int main()
{
    // Create Logger object
    Logger logger(Logger::LogLevel::INFO);

    logger.log("Application started.");

    // Create CalculationEngine object
    CalculationEngine calculator(logger);

    // Define base and exponent
    double base = 2.0;
    int exponent = 5;

    // Perform power calculation
    double result = calculator.power(base, exponent);

    // Display calculation details
    cout << "Base: " << base << endl;
    cout << "Exponent: " << exponent << endl;
    cout << "Result: " << result << endl;

    logger.log("Application finished.");

    return 0;
}
