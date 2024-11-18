#include <iostream>

int preencher_vetor(int n, int *vetor)
{
    int c = 0;
    int m = 1;
    while (c < n)
    {
        vetor[c] = m * n + c;
        c++;
        m+= 2;
    };

    return *vetor;
}


int main()
{
    int vetor[1000];
    preencher_vetor(1000, vetor);

    int soma= 0;
    // int vetor_teste[3] =;
    for (int i=0; i < sizeof(vetor)/4;i++){
        soma = soma + vetor[i];
    };
    std::cout << "A soma do vetor é:" << soma <<std::endl;
    // return 0;
}