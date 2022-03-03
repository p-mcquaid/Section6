#include <iostream>

using namespace std;
//Declaring and using constants of different types
int main(){
    // //declared using literal constants(hard coding the values into the calculations)
    // cout << "Hello, welcome to the carpet cleaning service\n";
    // cout << "==================\n";
    // cout << "How many rooms would you like cleaned? \n";
    // int roomsToClean {0};
    // cin >> roomsToClean;
    // cout << roomsToClean << " rooms to be cleaned\n";
    // cout << "\nThe price per room is $" << 30 << endl;
    // cout << "The cost of the cleaning comes to $" << 30*roomsToClean << endl;
    // cout << "\nThe sales tax for the cleaning comes to $" << (30*roomsToClean)*0.06;
    // cout << "\n================\n";
    // cout << "The total cost to clean including tax is $" << (30*roomsToClean)+((30*roomsToClean/100)*6) << endl;
    // cout << "The estimate is valid for " << 30 << " days\n";

//=======================================================
    //declared using other type of constants

    cout << "Hello, welcome to the carpet cleaning service\n";
    cout << "==================\n";
    cout << "How many rooms would you like cleaned? ";
    float roomsToClean {0};
    cin >> roomsToClean;
    cout << roomsToClean << " rooms to be cleaned\n";
    
    const double pricePerRoom {32.50};
    const double salesTax {0.06};
    const int estimateExpiry {30};
    cout << "\nThe price per room is $" << pricePerRoom << endl;
    double costToClean {pricePerRoom*roomsToClean};
    cout << "The cost of the cleaning comes to $" << costToClean << endl;
    double totalEstimate {costToClean + (costToClean*salesTax)};
    cout << "================\n";
    cout << "The total cost to clean including tax is $" << totalEstimate << endl;
    cout << "The estimate is valid for" << estimateExpiry << " days\n";
    return 0;
}
