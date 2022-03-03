#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::end;
//Examples of primitive types

int main (){

    #pragma region Char Types
    // char middleInital {'C'};
    // cout << "My middle initial is " << middleInital << endl;

    #pragma endregion

    #pragma region Integer Types
    // //unsigned integers. unsigned means ranging from 0 to limit, only positives
    // unsigned short int examScore {55};
    // cout << "My exam score is " << examScore << endl;

    // //int represent the same as signed short int, just no need to write all of it
    // int countriesRepresented {65};
    // cout << "There were " << countriesRepresented << " countries represented at the meeting\n";

    // //long integer, for bigger numbers that need more bit representation
    // long populationOfFlorida {21'600'000};
    // cout << "The population of Florida is " << populationOfFlorida << endl;

    // //long wouldn't allow all characters to fit into variable and cause overflow so long long required
    // long long populationOfEarth {7'600'000'000};
    // cout << "The population of Earth is " << populationOfEarth << endl;
    
    // long long distanceToAlphaCentauri {9'461'000'000'000};
    // cout << "The distance to Alpha Centauri in Km is " << distanceToAlphaCentauri << endl;
    #pragma endregion

    #pragma region Floating Point Types
   
    // float carPayment {401.96};
    // cout << "My car payment this month is " << carPayment << endl;

    // double pi {3.14159};
    // cout << "PI is equal to " << pi << endl;

    // long double bigNumber {2.7e120};
    // cout << bigNumber << ". This is a big number!" << endl;

    #pragma endregion

    #pragma region Boolean Type

    // //represented in code as 0 or 1, 0 being false and 1 being true
    // bool isGameOver {false};
    // cout << "The value of isGameOver is " << isGameOver << endl;

    #pragma endregion

    #pragma region Overflow example

    //The answer for the priduct would be incorrect because 
    //short would not be able to display the full answer
    //because it's type doesn't allow it to display the
    //amount of bits. A Long would suffice better 
    short value1 {30'000};
    short value2 {1000};
    long product {value1*value2};

    cout << product << endl;

    #pragma endregion
}


