
/**
 * @file CalculationEngine.h
 * @brief Defines the CalculationEngine class.
 */

#ifndef CALCULATION_ENGINE_H
#define CALCULATION_ENGINE_H

#include "Logger.h"
#include <stdexcept>

using namespace std;

/**
 * @class CalculationEngine
 * @brief Performs mathematical calculations.
 *
 * @details
 * The CalculationEngine class provides mathematical operations
 * and uses the Logger class to display calculation information.
 *
 * Currently, it supports power calculation using a base
 * and an integer exponent.
 */
class CalculationEngine
{
private:

    Logger& logger;

public:

    /**
     * @brief Constructs a CalculationEngine object.
     *
     * Initializes the calculation engine with a Logger object.
     *
     * @param log Reference to the Logger object.
     */
    CalculationEngine(Logger& log)
        : logger(log)
    {
        logger.log("Calculation Engine initialized.");
    }

    /**
     * @brief Calculates the power of a number.
     *
     * Calculates base raised to the given exponent.
     * Supports both positive and negative integer exponents.
     *
     * @param base The base value.
     * @param exponent The integer exponent.
     *
     * @return The calculated power result.
     *
     * @todo Extend this function to support additional
     * mathematical operations and optimized algorithms.
     *
     * @throws invalid_argument If base is zero and exponent is negative.
     */
    double power(double base, int exponent)
    {
        logger.log("Performing power calculation.");

        if (base == 0.0 && exponent < 0)
        {
            throw invalid_argument(
                "Zero cannot have a negative exponent."
            );
        }

        double result = 1.0;
        long long exp = exponent;

        if (exp < 0)
        {
            exp = -exp;
        }

        for (long long i = 0; i < exp; i++)
        {
            result *= base;
        }

        if (exponent < 0)
        {
            result = 1.0 / result;
        }

        logger.log("Power calculation completed.");

        return result;
    }
};

#endif // CALCULATION_ENGINE_H
