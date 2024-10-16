// Polina Maidanova
// Programming Fundamentals
// CS 1436
// 005
// Due Date: 10/15/2024
// Date Completed: 10/15/2024
// Date Submitted: 10/15/2024


// This program predicts the size of a population of organisms.

#include <iostream> // Header file allowing the use of input/output objects.
using namespace std;    // Use standard namespace.

int main()  // Main function, the starting point of the program execution.
{
    // Declare variables to store the population information.
    double fPopulationIncreasePercentage, fPopulationIncrement, fInitialPopulation, fTotalPopulation;
    int iDays;

    // Request the initial population size.
    cout << "Enter the number of bodies in the initial population (at least 2): ";
    cin >> fInitialPopulation;

    // Validate the initial population size.
    while (fInitialPopulation < 2.0)    // Check if the initial population size is less than 2 bodies.
    {
        cout << "Invalid input. Enter a value of at least 2 for the initial population: ";  // Display the error message.
        cin >> fInitialPopulation;  // Get new input.
    }

    // Request the daily population increase percentage.
    cout << "Enter the daily population increase percentage: ";
    cin >> fPopulationIncreasePercentage;

    // Validate the daily population increase percentage.
    while (fPopulationIncreasePercentage < 0.0) // Check if the population increase percentage is negative, display the error message.
    {
        cout << "Invalid input. Enter a non-negative value for the daily population increase percentage: ";
        cin >> fPopulationIncreasePercentage;
    }

    // If the increase was entered as a percentage, convert the value to a number between 0 and 1.
    if (fPopulationIncreasePercentage > 1.0)
    {
        fPopulationIncreasePercentage /= 100.0;
    }

    // Request the number of days for which the population will be increasing.
    cout << "Enter the number of days for which the population will be increasing: ";
    cin >> iDays;

    // Validate the number of days for which the population has been increasing.
    while (iDays < 1)   // Check if the number of days is less than 1, and display the error message if true.
    {
        cout << "Invalid input. Enter a value of at least 1 for the number of days: ";
        cin >> iDays;
    }

    // Display the initial population size for the first day.
    cout << "Day 1: " << fInitialPopulation << " organisms\n";

    // Calculate and display the population size for each subsequent day.
    for (int iDaysCounter = 0 ; iDaysCounter <= iDays - 1; iDaysCounter++)  // Repeat the loop for every day.
    {
        fPopulationIncrement = fInitialPopulation * fPopulationIncreasePercentage;  // Calculate the increase in population.
        fTotalPopulation = fInitialPopulation + fPopulationIncrement;   // Calculate the total population.

        // Display the population size for the current day as an integer.
        cout << "Day " << iDaysCounter + 2 << ": " << static_cast<int> (fTotalPopulation) << " organisms" << endl;
        
        fInitialPopulation = fTotalPopulation;  // Update the initial population.
    }

    return 0;   // Return 0 to indicate successful completion of the program.
}
