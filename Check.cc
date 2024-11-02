#include <iostream>
#include <string>
using namespace std;

void propouse() {
    cout << "Este programa genera números de fibonacci" << endl;
}

bool check(const int argc, char* argv[], const int Kcorrectnumber) {
    if (argc != Kcorrectnumber) {
        cout << "Demasiados argumentos" << endl;
        return false;
    }
    return true;
}

int input() {}
int operation() {}
int output() {}

int main(int argc, char* argv[]) {
    propouse();
    if (!check(argc, argv, 2)) {
        return 345;
    }
    input();
    operation();
    output();
}
