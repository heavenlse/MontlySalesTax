#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string month;
    int year;
    double totalCollected;
    double sales;
    double countyTax;
    double stateTax;
    double totalSalesTax;

    // Get information from the user
    cout << "Enter the month: ";
    cin >> month;

    cout << "Enter the year: ";
    cin >> year;

    cout << "Enter the total amount collected: $";
    cin >> totalCollected;

    // Calculate sales and taxes
    sales = totalCollected / 1.06;
    countyTax = sales * 0.02;
    stateTax = sales * 0.04;
    totalSalesTax = countyTax + stateTax;

    // Display the report
    cout << fixed << setprecision(2);

    cout << "\nMonth: " << month << endl;
    cout << "Year: " << year << endl;
    cout << endl;

    cout << "Total Collected:     $" << totalCollected << endl;
    cout << "Sales:               $" << sales << endl;
    cout << "County Sales Tax:    $" << countyTax << endl;
    cout << "State Sales Tax:     $" << stateTax << endl;
    cout << "Total Sales Tax:     $" << totalSalesTax << endl;

    return 0;
}
