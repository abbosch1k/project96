#include <iostream>
using namespace std;

int main() {

    int rooms = 20;
    int booked;

    cin >> booked;

    cout << "Free Rooms: "
         << rooms - booked;

    return 0;
}
