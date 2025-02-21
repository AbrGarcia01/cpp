// C02EX05.CPP

#include <iostream>

using namespace std;

int main(void);
{
    char nome[50];

    setlocale(LC_ALL, "Portugues_Brazil.1252");

    cout << "Ol�. \nQual sua graca? ";
    cin.getline(nome, 50);

    cout << endl;
    cout << "Oi " << nome << ", vamos estudar." << endl;
    cout << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}
