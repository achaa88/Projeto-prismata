#include "Player.h"


Player::Player()
{
}

Player::~Player()
{
}
void Player::adiciona_unidade(base_unidades unidade,TIPO_UNIDADE tipo){
	switch(tipo){
		case TU_TECH:
			adiciona_unidade_vetor(unidade,tecnologia,indice_tecnologia);
			break;
		case TU_ECO:
			adiciona_unidade_vetor(unidade,economia,indice_economia);
			break;
		case TU_ATK_PERM:
			adiciona_unidade_vetor(unidade,ataque_permanente,indice_ataque_permanente);
			break;
		case TU_CLIC:
			adiciona_unidade_vetor(unidade,clicaveis,indice_clicaveis);
			break;
		case TU_DEF:
			adiciona_unidade_vetor(unidade,defesa,indice_defesa);
			break;
	}
}
void Player::adiciona_unidade_vetor(base_unidades unidade,base_unidades vetor[],int &indice){
	vetor[indice]=unidade;
	indice++;
}
int Player::calcula_def_maxima(){
	int gold=0,green=0,blue=0,red=0;
}
double Player::calcula_eficiencia_ataque(){
	
}
double Player::calcula_eficiencia_breach(){
	
}
double Player::calcula_eficiencia_def(){
	
}
double Player::calcula_porc_gasto_def(){
	
}
