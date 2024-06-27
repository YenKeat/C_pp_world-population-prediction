#include<iostream>
#include<iomanip>
using namespace std;

// As the yearly growth rate in 2024 is 0.91%, assumed this will be the same for future years.

// Number of world population in 2024 is 8118294745 - rougly 81 billion  (27/6/2024, 4:04pm) 

double yearlyGrowthRate{ 0.91 };
long long previousYearWorldPopulation{ 8118294745 };  
long long currentYearWorldPopulation{ 8118294745 };
unsigned int currentYear{ 2024 };
unsigned int yearCounted{ 0 };
long long numericalIncrease{ 0 };

//Current World Population     - 24 characters
//Year                         - 4  characters
//Numerical Increase from 2024 - 28 characters
int main()
{
	cout << "Here I presented estimation a table represents next 75 years of world population growth from year 2024.\n"<<endl;

	cout << "Year" << setw(39) << "Current World Population" << setw(32) << "Numerical Increase from 2024" << endl;
	while (yearCounted < 75)
	{
		yearCounted += 1;
		currentYear += 1;
		currentYearWorldPopulation *= (1+yearlyGrowthRate/100);
		numericalIncrease = currentYearWorldPopulation - previousYearWorldPopulation;
		cout << setprecision(2) << fixed;
		cout << "Year" << currentYear<<"\t\t"<<currentYearWorldPopulation<<"\t\t\t"<<numericalIncrease<<endl;

	}
	
	cout << "\nTotal year passed is: " << yearCounted <<" years.\n";
	cout << "\nTotal population after 75 years is " << currentYearWorldPopulation << endl;
	double percentageIncreased = (static_cast<double>(currentYearWorldPopulation) - 8118294745)/8118294745*100;
	cout << "\nThe percentage increased compared to year 2024: "<<percentageIncreased<<" %"<< endl;

	return 0;
}