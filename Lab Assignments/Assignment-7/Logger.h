
/**
 * @file Logger.h
 * @brief Defines the Logger class for application logging.
 *
 * @mainpage Assignment 9 - Doxygen Documentation
 *
 * @section intro Introduction
 * This project demonstrates the use of Doxygen for generating
 * documentation of a multi-file C++ project.
 *
 * @section features Features
 * - Logging messages with different severity levels.
 * - Mathematical calculations using CalculationEngine.
 * - Documentation of classes, functions and enumerations.
 */

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>

using namespace std;

/**
 * @class Logger
 * @brief Provides logging functionality for the application.
 *
 * The Logger class displays messages with different logging levels,
 * including INFO, WARNING and ERROR.
 */
class Logger
{
public:

    /**
     * @enum LogLevel
     * @brief Defines the available logging levels.
     */
    enum class LogLevel
    {
        INFO,       /**< General informational messages. */
        WARNING,    /**< Warning messages. */
        ERROR       /**< Error messages. */
    };

    /**
     * @brief Constructs a Logger object.
     *
     * Initializes the logger with the specified logging level.
     *
     * @param level Initial logging level. Default is INFO.
     */
    Logger(LogLevel level = LogLevel::INFO)
        : currentLevel(level)
    {
    }

    /**
     * @brief Displays a log message.
     *
     * Prints the message along with its logging level.
     *
     * @param message The message to be displayed.
     */
    void log(const string& message)
    {
        cout << "[" << getLevelName() << "] "
             << message << endl;
    }

private:

    LogLevel currentLevel;

    /**
     * @brief Gets the name of the current logging level.
     *
     * @return String representation of the logging level.
     */
    string getLevelName() const
    {
        switch (currentLevel)
        {
            case LogLevel::INFO:
                return "INFO";

            case LogLevel::WARNING:
                return "WARNING";

            case LogLevel::ERROR:
                return "ERROR";
        }

        return "UNKNOWN";
    }
};

#endif // LOGGER_H
