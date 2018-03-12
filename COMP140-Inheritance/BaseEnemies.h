#pragma once
class BaseEnemies
{
public:
	BaseEnemies();
	~BaseEnemies();
	void TakeDamage(int damage);
	int GetHealth();
	int GetDamage();
	int Health;
	int Damage;

	virtual void Attack()
	{
		std :: cout << "The attack causes " << Damage << " damage" << std :: endl;
	}
};

