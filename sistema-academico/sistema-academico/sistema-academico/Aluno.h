#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Aluno : public Pessoa 
{
private:
    int RA;   // Registro Acadêmico
    float CR; // Coeficiente de Rendimento
    Universidade* pUniversidade;
public:
    Aluno(const char* cNome, int dia, int mes, int ano, int novoRA, float novoCR);
    Aluno();
    ~Aluno();

    void setRA(int novoRA);
    int getRA();
    void setCR(float novoCR);
    float getCR();
    void setUniversidade(Universidade* pUni);
    const char* setUniversidade();
};