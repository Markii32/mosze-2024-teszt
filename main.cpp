#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{ // Javítottuk a változó nevét hogy egyezzen a definiált konstansal
    int *b = new int[NELEMENTS]; //NELEMENTS -- N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // Nincsen vége
    for (int i = 0;)
    {
        b[i] = i * 2;// Helyesen feltöltjük a tömböt
    } // Javítottuk az i inicializálást és a ciklus feltételét
    for (int i = 0; i; i++)//Helyes ciklusfeltétel
    {
        std::cout << "Ertek:" // Hozzáadtuk a hiányzó idézőjeleket és az endlt-t
    }   
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // Hpzzáadtuk a feltételt i <N_ELEMETNS
    {
        atlag += b[i]// Helyesen összeadjuk az elemeket
    }
    atlag /= N_ELEMENTS; //Kiszámítjuk az átlagot
    std::cout << "Atlag: " << atlag << std::endl; // Kiírjuk az átlagot
    return 0;
}
