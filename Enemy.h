#pragma once
class Enemy
{
public:
	Enemy() { phase_ = 0; }
	~Enemy() {};
	/// <summary>
	/// �ڋ�
	/// </summary>
	void Approach();

	/// <summary>
	/// �U��
	/// </summary>
	void Attack();

	/// <summary>
	/// ���E
	/// </summary>
	void Leave();

	void Update();

private:
	static void (Enemy::* spEnemyTable[])();

	int timer = 300;
	int timer2 = 300;
	int phase_;
};

