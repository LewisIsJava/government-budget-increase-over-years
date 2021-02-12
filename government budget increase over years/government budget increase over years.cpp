// government budget increase over years.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double budget_now, budget_increase, budget_later, desired_birthrate_percentage_input_by_user, actual_birthrate_percentage, years_until_new_budget_is_actualised, current_population, population_increase, budget_per_person,population_later;
	cout << "This program will take the budget now, the current population, the birth rate, the years until the budget is actualised and try to predict the later budget after the population increase\n";

	cout << "Please enter the budget now: $";
	cin >> budget_now;
	
	cout << endl;
	
	cout << "Please enter the current population: ";
	cin >> current_population;
	
	cout << endl;

	budget_per_person = budget_now / current_population;

	cout << "(" << "The budget per person is: $" << budget_per_person << ")" << endl;

	cout << endl;
	
	cout << "Please enter the birth rate: %";
	cin >> desired_birthrate_percentage_input_by_user; 
	
	cout << endl;
	
	cout << "Please enter the years until the projected budget will be actualised: ";
	cin >> years_until_new_budget_is_actualised;
	
	cout << endl;

	while (current_population > 0)
	{
		actual_birthrate_percentage = desired_birthrate_percentage_input_by_user / 100;

		population_increase = (current_population * actual_birthrate_percentage) * years_until_new_budget_is_actualised;

		cout << endl;

		cout << "The population increased over this time period with the birth rate equals to " << population_increase << " new people" << endl;

		budget_increase = (budget_now * population_increase) / current_population;
		cout << "The budget increase is  $" << budget_increase;

		population_later = current_population + population_increase;

		cout << endl;

		cout << "The predicted population is " << population_later;

		cout << endl;

		budget_later = budget_per_person * population_later;
		cout << "The new budget needed is $" << budget_later << endl;
		
		current_population = 0;
		
		cout << "---------------------------------------" << endl;
		cout << "To run this program again please fill in the responses when propmpted, if not, just press 0" << endl;

		cout << "Please enter the budget now: $";
		cin >> budget_now;

		cout << endl;

		cout << "Please enter the current population: ";
		cin >> current_population;

		cout << endl;

		budget_per_person = budget_now / current_population;

		cout << "(" << "The budget per person is: $" << budget_per_person << ")" << endl;

		cout << endl;

		cout << "Please enter the birth rate: %";
		cin >> desired_birthrate_percentage_input_by_user;

		cout << endl;

		cout << "Please enter the years until the projected budget will be actualised: ";
		cin >> years_until_new_budget_is_actualised;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
