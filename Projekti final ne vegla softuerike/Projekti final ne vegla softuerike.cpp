// Projekti final ne vegla softuerike.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <iomanip>
using namespace std;

double convertCurrency(double amount, string from, string to, unordered_map<string, double>& rates) {
    if (rates.find(from) == rates.end() || rates.find(to) == rates.end()) {
        cout << "Invalid currency code!" << endl;
        return -1;
    }
    double amountInUSD = amount / rates[from];
    return amountInUSD * rates[to];


    int main() {


    unordered_map<string, double> exchangeRates = {
        {"USD", 1.0},
        {"EUR", 0.92},
        {"GBP", 0.78},
        {"INR", 83.0},
        {"JPY", 148.5},
        {"CAD", 1.35}
    };

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
