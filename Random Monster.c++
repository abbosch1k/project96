#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string monsters[4] = {
        "Zombie",
        "Dragon",
        "Ghost",
        "Skeleton"
    };

    cout << monsters[rand()%4];

    return 0;
}
