#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::end;
//Calculate area of a room


int main(){
   
    
    cout << "Enter the width of the room \n";
    int roomWidth {0};
    cin >> roomWidth;
    cout << "Enter the length of the room \n";
    int roomLength {0};
    cin >> roomLength;

    cout << "The area of the room in square feet is: " << roomLength*roomWidth << endl;

    return 0;
}