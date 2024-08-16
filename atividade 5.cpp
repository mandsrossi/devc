#include <iostream>
#include <string>
using namespace std;


void cifraCesar(char* texto, int deslocamento) {
    for (int i = 0; texto[i] != '\0'; ++i) {
        if (isalpha(texto[i])) {
            char base = islower(texto[i]) ? 'a' : 'A';
            texto[i] = (texto[i] - base + deslocamento) % 26 + base;
        }
    }
}

int main() {
    int chave;
    char puro[10];


    cout << "Digite a chave: ";
    cin >> chave;

    cout << "Digite a palavra: ";
    cin >> puro;

    cifraCesar(puro, chave);

    cout << "Resultado: " << endl;
    for (int i = 0; i < sizeof(puro) - 1; ++i) {
        cout << puro[i] << endl;
    }

    return 0;
}

