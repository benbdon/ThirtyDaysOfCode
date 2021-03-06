#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	double mealCost;
	int tipPercent;
	int taxPercent;

	// get input from the user meal cost, tip%, and tax%
	cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;

    int totalCost = round(mealCost * (1 + (tipPercent+taxPercent)/100.0));
    
    cout << "The total meal cost is " + std::to_string(totalCost) + " dollars.";
    return 0;
}