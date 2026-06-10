#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string loot[4] = {
        "Gold",
        "Diamond",
        "Potion",
        "Shield"
    };

    cout << loot[rand()%4];

    return 0;
}
