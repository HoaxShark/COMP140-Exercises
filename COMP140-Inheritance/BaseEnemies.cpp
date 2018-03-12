#include "stdafx.h"
#include "BaseEnemies.h"


BaseEnemies::BaseEnemies()
{
	int Health = 10;
	int Damage = 2;
}


BaseEnemies::~BaseEnemies()
{
}

void BaseEnemies::TakeDamage(int damage)
{
	Health -= damage;
}

int BaseEnemies::GetHealth()
{
	return Health;
}

int BaseEnemies::GetDamage()
{
	return Damage;
}


