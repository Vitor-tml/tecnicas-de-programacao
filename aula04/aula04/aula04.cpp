// aula04.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include <stdio.h>

struct Pessoa {
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

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
