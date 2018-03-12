#pragma once
#include "BaseEnemies.h"
class RangedEnemies :
	public BaseEnemies
{
public:
	RangedEnemies();
	~RangedEnemies();

	void Attack() override
	{
	BaseEnemies:: Attack();
		Damage += 1;
		std :: cout << "This is the ranged unit attacking" << std :: endl;
	}
};

