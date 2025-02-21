// C02EX12.CPP

#include <iostream>

using namespace std;

int main(void)
{
    bool x = true ;

    cout << boolalpha;

    cout << "O valor X como verdadeiro ...: " << x << endl;

    x = false;
    cout << "O valor X como falso ...: " << x << endl;

    cout << noboolalpha;

    x = true;
    cout << "Valor X como verdeiro ...: " << x << endl;

    x = false
    cout << "Valor X como falso ...: " << x << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}
