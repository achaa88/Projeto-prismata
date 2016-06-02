#ifndef BASE_UNIDADES_H
#define BASE_UNIDADES_H

class base_unidades
{
	public:
		base_unidades();
		~base_unidades();
	protected:
		int custo_gold;
		int custo_energia;
		int custo_green;
		int custo_blue;
		int custo_red;
		int custo_ataque;

		int hp;
		int ataque;
		int lifespan;
		int stamina;
		int buildtime;

		bool frontline;
		bool fragile;
		bool prompt;
		bool blocker;
};

#endif
