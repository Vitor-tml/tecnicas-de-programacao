#include <stdio.h>

struct Pessoa{
    public: 
    int dia;
    int mes;
    int ano;
    int idade;

    Pessoa(int d, int m, int a)
    {
        dia = d;
        mes = m;
        ano = a;
        idade = -1;
    }

    void calculaIdade(int diaAtual, int mesAtual, int anoAtual)
    {
        
    }
};
int main()
{
    Pessoa einstein(14, 4, 1879);
    Pessoa vitor(31, 8, 2004);
    
    einstein.calculaIdade(30, 8, 2023);
    vitor.calculaIdade(30, 8, 2023);

    printf("Einstein %d anos\n", einstein.idade);
    printf("Vitor %d anos\n", vitor.idade);
}