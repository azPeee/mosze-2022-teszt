#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // (", nem  ' lehet igy is jo)     <<std::endl
    for (int i = 0;) // nincs leptetes (int i=1;i<=N_ELEMENTS;i++)
    {
        b[i] = i * 2; //b[i-1]
    }
    for (int i = 0; i; i++) //i<N_ELEMENTS
    {
        std::cout << "Ertek:"  //<<b[i]<<std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //double atlag=0;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
