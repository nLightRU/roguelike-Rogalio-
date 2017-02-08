#include "monster.h"
#include <time.h>

void Monster::MakeWay()
{

}

Monster::Monster()
{
	_health = 1;
	_mana = 0;
}

void Monster::setHealth(int health)
{
	_health = health;
}

void Monster::setMana(int mana)
{
	_mana = mana;
}

void Monster::setRarity(int rarity)
{
	_rarity = rarity;
}

void Monster::setName(std::string name)
{
	_name = name;
}

void Monster::setPosition(vec2 position)
{
	_position = position;
}

void Monster::setMaxHealth(int maxHealth)
{
	_maxHealth = maxHealth;
}

void Monster::setDamage(int minDamage, int maxDamage)
{
	_minDamage = minDamage;
	_maxDamage = maxDamage;
}

int Monster::makeHit()
{
	srand(time(NULL));
	return rand() % (_maxDamage - _minDamage + 1) + _minDamage;
}

void Monster::move(int dx, int dy)
{
	_position.x += dx;
	_position.y += dy;
}
