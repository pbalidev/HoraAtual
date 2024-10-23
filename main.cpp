#include <cstdlib>
#include <cstdio>
#include <locale>
#include <Windows.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	SetConsoleOutputCP (CP_UTF8);
    int hora;

    cout << "Digite a hora atual (0 a 23): ";
    cin >> hora;

    if (hora >= 0 && hora < 12) {
        cout << "Bom dia!" << endl;
    } else if (hora >= 12 && hora < 18) {
        cout << "Boa tarde!" << endl;
    } else if (hora >= 18 && hora < 24) {
        cout << "Boa noite!" << endl;
    } else {
        cout << "Hora inválida!" << endl;
    }

    return 0;
}
