#include <iostream>
//using the SizeOf operator
#include <climits>  //must be included to define limts of types
#include <cfloat> // used for float instead of integers

using namespace std;

int main(){
    cout << "sizeOf information" << endl;
    cout << "==================\n";
    
    cout << "char:" << sizeof(char) << " bytes" << endl; 
    cout << "int:" << sizeof(int) << " bytes" << endl; 
    cout << "unsigned int:" << sizeof(unsigned int) << " bytes" << endl; 
    cout << "short:" << sizeof(short) << " bytes" << endl; 
    cout << "long:" << sizeof(long) << " bytes" << endl; 
    cout << "long long:" << sizeof(long long) << " bytes" << endl; 
   
    cout << "==============================\n";
    cout << "float:" << sizeof(float) << " bytes" << endl; 
    cout << "double:" << sizeof(double) << " bytes" << endl; 
    cout << "long double:" << sizeof(long double) << " bytes" << endl; 
    
    //Values defined in <climits>
    cout << "=====================\n";     
    cout << "Minimum values(Integers)" << endl;

    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;
    cout << "=====================\n";
    cout << "Minimum Values(floats)" << endl;
    cout << "float: " << FLT_MIN << endl;
    cout << "double: " << DBL_MIN << endl;
    cout << "long double: " << LDBL_MIN << endl;

    cout << "=====================\n";     
    cout << "Max values(Ints)" << endl;

    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;
    cout << "=====================\n";  
    cout << "Max Values(floats)" << endl;
    cout << "float: " << FLT_MAX << endl;
    cout << "double: " << DBL_MAX << endl;
    cout << "long double: " << LDBL_MAX << endl;

    cout << "===================\n";
    cout << "Size of using variables" << endl;
    //Size of can also be used with variables as well
    int age {23};
    cout << "Age is " << sizeof(age) << " bytes" << endl;
    // Or
    cout << "Age is " << sizeof age << " bytes" << endl;

    double wage{23.48};
    cout << "Wage is " << sizeof(wage) << " bytes" << endl;
    // Or
    cout << "Wage is " << sizeof wage << " bytes" << endl;
    return 0;
}