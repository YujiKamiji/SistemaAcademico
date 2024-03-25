#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_

#include "Departamento.h"

class Universidade
{
private:
    char nome[130];
    int indice;
    Departamento* pDptos[50]; //vetor de departamentos

public:
    Universidade();
    ~Universidade();

    void setNome(const char* n);
    char* getNome();
    void setDepartamento(Departamento* pdep);
};

#endif
