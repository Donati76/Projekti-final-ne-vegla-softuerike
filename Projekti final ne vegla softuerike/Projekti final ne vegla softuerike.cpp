// Projekti final ne vegla softuerike.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <iomanip>
using namespace std;

// Function to convert currency
//Parametrat
//- amount : Shuma e konvertimit
//- from : Burimi i kodit (me saktesisht valuta nga e cila doni te bene konvertimin)
//- to : Valuta ne te cilen doni te kryhet konvertimi
//- rates : Nje harte e cila gjene vleren e kerkuar te valutes se caktuar per ta konvertuar
double convertCurrency(double amount, string from, string to, unordered_map<string, double>& rates) {
    if (rates.find(from) == rates.end() || rates.find(to) == rates.end()) {
        cout << "Invalid currency code!" << endl;
        return -1;
    }
    //Konvertimi se pari ne dollar me pas ne valuten qe deshironi
    double amountInUSD = amount / rates[from];
    return amountInUSD * rates[to];
}


    int main() {
        //Vlerat e kembimit duke u krahasuar me 1 dollar
        unordered_map<string, double> exchangeRates = {
        {"USD", 1.0},
        {"EUR", 0.92},
        {"GBP", 0.78},
        {"INR", 83.0},
        {"JPY", 148.5},
        {"CAD", 1.35}
    };

    string fromCurrency, toCurrency;
    double amount;

    //Kerkesa qe perdoruesi te shenoj valtat dhe shumen qe i nevoitet te konvertoj
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter from currency (USD, EUR, GBP, INR, JPY, CAD): ";
    cin >> fromCurrency;
    cout << "Enter to currency (USD, EUR, GBP, INR, JPY, CAD): ";
    cin >> toCurrency;

    //Konvertimi
    double convertedAmount = convertCurrency(amount, fromCurrency, toCurrency, exchangeRates);
    if (convertedAmount != -1)
        //Paraqitja e shumes se konvertuar me 2 numra decimal 
        cout << fixed << setprecision(2) << amount << " " << fromCurrency << " = " << convertedAmount << " " << toCurrency << endl;

    return 0;

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
