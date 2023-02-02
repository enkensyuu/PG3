#include "Enemy.h"
#include "DxLib.h"

void Enemy::Approach()
{
	DrawFormatString(0,0,GetColor(255,0,0),"Ú‹ß");
}

void Enemy::Attack()
{
	DrawFormatString(0, 30, GetColor(255, 0, 0), "UŒ‚");
}

void Enemy::Leave()
{
	DrawFormatString(0, 60, GetColor(255, 0, 0), "—£’E");
}

void (Enemy::* Enemy::spEnemyTable[])()
= {
	&Enemy::Approach,
	&Enemy::Attack,
	&Enemy::Leave
};

void Enemy::Update()
{
	timer--;
	(this->*spEnemyTable[0])();
	if (timer <= 0)
	{
		(this->*spEnemyTable[1])();
		timer2--;
	}
	if (timer2 <= 0)
	{
		(this->*spEnemyTable[2])();
	}
}