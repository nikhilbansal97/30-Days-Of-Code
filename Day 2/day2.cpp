#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float meal;
    float tax, tip;
    cin >> meal >> tip >> tax;
    tip = (meal * tip) / 100;
    tax = (meal * tax) / 100;
    int total = (int)(meal + tip + tax);
    cout << "The total meal cost is " << round(meal + tip + tax) << " dollars.";
    return 0;
}

