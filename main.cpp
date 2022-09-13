#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hianyzik az alulvonas
    int *b = new int[N_ELEMENTS];
    // Nincsen pontosvesszo a sor vegen, rossz aposztrof  
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    // csak a for ciklus kezdoerteke van
    for (int i = 0; i < N_ELEMENTS; i++)
    {
    // 0-tól 99-ig duplaz... 1től 100-ig lenne helyes    
         b[i] = (i + 1) * 2;
    }
    // a ciklus vezerlo hibas, mindig hamis lesz az eredmenye, igy nem lep be a ciklusba
    for (int i = 0; i < N_ELEMENTS; i++)
    {
    // Nem irjuk ki az erteket, es hianyzik a pontosvesszo    
        std::cout << "Ertek:" << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //nincs kezdoerteke az atlag valtozonak
    int atlag = 0;
    //az N_ELEMENTS utan ; kell nem pedig vesszo
    for (int i = 0; i < N_ELEMENTS; i++)
    {
    // hianyzik egy pontosvesszo    
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    std::cout << "Balogh Dárius írta";

    return 0;
}
