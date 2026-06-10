#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string countries[4] = {
        "Japan",
        "Brazil",
        "Canada",
        "Italy"
    };

    cout << countries[rand()%4];

    return 0;
}
