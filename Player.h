#ifndef PLAYER_H
#define PLAYER_H
#include "base_unidades.h"
#include <stdlib.h>
enum TIPO_UNIDADE{
	TU_TECH=0,
	TU_ECO=1,
	TU_ATK_PERM=2,
	TU_DEF=3,
	TU_CLIC=4
};
class Player
{
	base_unidades tecnologia[50];
	base_unidades ataque_permanente[50];
	base_unidades economia[50];
	base_unidades defesa[100];
	base_unidades clicaveis[100];
	int indice_tecnologia;
	int indice_ataque_permanente;
	int indice_economia;
	int indice_defesa;
	int indice_clicaveis;
	public:
		Player();
		~Player();
int		calcula_def_maxima();
double  calcula_eficiencia_def();
double  calcula_eficiencia_ataque();
double  calcula_porc_gasto_def();
double  calcula_eficiencia_breach();
void    adiciona_unidade(base_unidades unidade,TIPO_UNIDADE tipo);
	protected:
void    adiciona_unidade_vetor(base_unidades unidade,base_unidades vetor[],int &indice);
};

#endif
