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
	int totalCost;

	cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;

    totalCost = round(mealCost * (1 + (tipPercent+taxPercent)/100.0));
    
    cout << "The total meal cost is " + std::to_string(totalCost) + " dollars.";
    return totalCost;
}