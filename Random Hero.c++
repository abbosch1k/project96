#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string heroes[5] = {
        "Knight",
        "Mage",
        "Archer",
        "Assassin",
        "Tank"
    };

    cout << heroes[rand()%5];

    return 0;
}
