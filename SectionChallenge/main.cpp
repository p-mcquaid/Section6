#include <iostream>

using namespace std;

int main (){

    const double costForSmallRoom {25};
    const double costForLargeRoom {35};
    const double salesTax {0.06};
    const int estimateExpiry {30};

    cout << "Welcome to the room cleaning service\n";
    cout << "==========\n";
    cout << "How many small rooms would you liked cleaned? ";
    int numberOfSmallRooms {0};
    cin >> numberOfSmallRooms;

    cout << "\n How many large rooms do you need cleaned? ";
    int numberOfLargeRooms {0};
    cin >> numberOfLargeRooms;
    cout << "\n==========\n";
    cout << "Number of small rooms: " << numberOfSmallRooms;
    cout << "\nNumber of large rooms: " << numberOfLargeRooms;
    cout << "\nPrice for a small room: $" << costForSmallRoom;
    cout << "\nPrice for a large room: $" << costForLargeRoom;
    double smallRoomTotal {costForSmallRoom*numberOfSmallRooms};
    cout << "\nTotal price for small rooms is $" << smallRoomTotal;
    double largeRoomTotal {costForLargeRoom*numberOfLargeRooms};
    cout << "\nTotal price for large rooms is $" << largeRoomTotal;

    cout << "\nThe total price for the cleaning is $" << 
    largeRoomTotal+smallRoomTotal;
    
    cout << "\nThe sales tax of this cleaning comes to $" << 
    (largeRoomTotal+smallRoomTotal)*salesTax;
    cout << "\n==========\n";

    cout << "The total cost is $" << 
    (largeRoomTotal+smallRoomTotal)+((largeRoomTotal+smallRoomTotal)*salesTax);

    cout << "\nThis estimate is valid for " << estimateExpiry << " days";
    return 0;
}