#include "Professor.h"
#include "Universidade.h"
#include <iostream>
using namespace std;

Professor::Professor(const char* cNome, int dia, int mes, int ano, Universidade* pUni, Departamento* pDepto):
    Pessoa(cNome, dia, mes, ano),
    pUniversidade(pUni), 
    pDepartamento(pDepto) 
{
    
}

Professor::Professor()
{

}

Professor::~Professor() 
{
    // Destrutor do Professor (se necessário)
}

void Professor::setUniversidade(Universidade* universidade) {
    pUniversidade = universidade;
}

char* Professor::getUniversidade()  
{
    return pUniversidade->getSigla();
}

void Professor::setDepartamento(Departamento* departamento) 
{
    pDepartamento = departamento;
}

char* Professor::getDepartamento()  
{
    return pDepartamento->getSigla();
}

const char* Professor::getSiglaUniversidade()  
{
    if (pUniversidade != nullptr) 
        return pUniversidade->getSigla();
    else 
        return nullptr;
}

const char* Professor::getNomeDepartamento()  
{
    if (pDepartamento != nullptr) 
        return pDepartamento->getNome();
    else 
        return nullptr;

}

void Professor::informaTrabalho()
{
    cout << nome << " faz parte do " << pDepartamento->getNome() << endl;
}