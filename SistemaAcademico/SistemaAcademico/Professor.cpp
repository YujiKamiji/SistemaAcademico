#include "stdafx.h"
#include "Professor.h"

Professor::Professor(int diaNa, int mesNa, int anoNa, const char* nome) :
Pessoa(diaNa, mesNa, anoNa, nome)
{
	pUnivFiliado = NULL;
	pDptoFiliado = NULL;
}

Professor::Professor() :
Pessoa()
{
}

Professor::~Professor()
{
}

void Professor::setUnivFiliado(Universidade* pu)
{
	pUnivFiliado = pu;
}

void Professor::setDepartamento(Departamento* pdep)
{
	pDptoFiliado = pdep;
}

void Professor::OndeTrabalho()
{
	//printf("\n %s trabalha para a %s \n", nomeP, UnivFiliado->getNome());
	cout << endl << nomeP << " trabalha para a " << pUnivFiliado->getNome() << "." << endl;
}

void Professor::QualDepartamentoTrabalho()
{
	/*printf("\n %s trabalha para a %s no departamento de % s \n",
			   nomeP,
			   UnivFiliado->getNome(),
			   DptoFiliado->getNome()
		   );  */

	cout << endl << " "
		<< nomeP
		<< " trabalha para a "
		<< pUnivFiliado->getNome()
		<< " no departamento de "
		<< pDptoFiliado->getNome()
		<< "." << endl;
}