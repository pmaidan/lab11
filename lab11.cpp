// This program predicts the size of a population of organisms.

#include <iostream>
using namespace std;

int main()
{
    double fPopulationIncreasePercentage, fDailyPopulationIncrease;
    int iInitialPopulation, iTotalPopulation, iDays;

    // Request the initial population size.
    cout << "Enter the number of bodies in the initial population (at least 2): ";
    cin >> iInitialPopulation;

    // Validate the initial population size.
    while (iInitialPopulation < 2)
    {
        cout << "Invalid input. Enter a value of at least 2 for the initial population: ";
        cin >> iInitialPopulation;
    }

    // Request the daily population increase percentage.
    cout << "Enter the daily population increase percentage: ";
    cin >> fPopulationIncreasePercentage;

    // Validate the daily population increase percentage.
    while (fPopulationIncreasePercentage < 0.0)
    {
        cout << "Invalid input. Enter a non-negative value for the daily population increase percentage: ";
        cin >> fPopulationIncreasePercentage;
    }

    // Convert the daily population increase percentage to a decimal.
    if (fPopulationIncreasePercentage > 1.0)
    {
        fPopulationIncreasePercentage /= 100.0;
    }

    // Request the number of days for which the population has been increasing.
    cout << "Enter the number of days for which the population has been increasing: ";
    cin >> iDays;

    // Validate the number of days for which the population has been increasing.
    while (iDays < 1)
    {
        cout << "Invalid input. Enter a value of at least 1 for the number of days: ";
        cin >> iDays;
    }

    // Display the initial population size for the first day.
    cout << "Day 1: " << iInitialPopulation << " organisms"<< endl;

    // Calculate and display the population size for each subsequent day.
    for (int iDaysCounter = 1 ; iDaysCounter <= iDays; iDaysCounter++)
    {
        iTotalPopulation = static_cast<int>((double)iInitialPopulation * (1.0 + fPopulationIncreasePercentage));
        cout << "Day " << iDaysCounter + 1 << ": " << iTotalPopulation << " organisms" << endl;
        iInitialPopulation = iTotalPopulation;
    }

    return 0;
}
