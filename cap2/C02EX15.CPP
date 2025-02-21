// C02EX15.CPP

/**
    O pragrama seguinte demonstra o uso de linhas de comentarios usadas em um
    codigo de programa escrito na linguagem de programacao c++.
    O programa apresenta a quantidade de bits de cada tipo de dado suportado em c++
*/

#include <iostream>

using namespace std;

/**
    Funcao principal
    @return 0 se o programa for bem-sucedido.
*/

int main(void)
{
    // declaracao de variaveis para varios tipos de dados.
    usigned short int   us;
    short               sh;
    short int           si;
    signed short int    ss;
    unsigned int        ui;
    unsigned long int   ul;
    int                 in;
    long                lo;
    signed long int     sl;
    long int            li;
    char                ch;
    signed char         sc;
    unsigned char       uc;
    float               fl;
    double              db;
    long double         ld;
    bool                bo;

    // Configura a formatacao de saida.
    cout << "Tipos de dados e seus tamanhos e, bits.\n";

    // Apresenta os tamanhos dos tipos de dados em bits.

    cout << "unsigned short int = " << sizeof(us) * 8 << "\n";
    cout << "short = " << sizeof(sh) * 8 << "\n";
    cout << "short int = " << sizeof(si) * 8 << "\n";
    cout << "signed short int  = " << sizeof(ss) * 8 << "\n";
    cout << "signed int = " << sizeof(sd) * 8 << "\n";
    cout << "unsigned int = " << sizeof(ui) * 8 << "\n";
    cout << "unsigned long int = " << sizeof(ul) * 8 << "\n";
    cout << "int = " << sizeof(in) * 8 << "\n";
    cout << "long = " << sizeof(lo) * 8 << "\n";
    cout << "long int = " << sizeof(li) * 8 << "\n";
    cout << "signed long int = " << sizeof(sl) * 8 << "\n";
    cout << "char = " << sizeof(ch) * 8 << "\n";
    cout << "signed char = " << sizeof(us) * 8 << "\n";
    cout << "unsigned char = " << sizeof(uc) * 8 << "\n";
    cout << "float = " << sizeof(fl) * 8 << "\n";
    cout << "double = " << sizeof(db) * 8 << "\n";
    cout << "long doube = " << sizeof(ld) * 8 << "\n";
    cout << "bool = " << sizeof(bo) * 8 << "\n";
    cout << endl;

    // Aguardar a entrada do usuario para encerrar.
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}
