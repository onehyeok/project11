#include "Monster.h"

int Monster::count = 0;

Monster::Monster()
{
	SetMonsterStatus("", 0, 0, 0);
	count++;
	cout << "(NULL) ������ �����Ǿ����ϴ�!" << endl;
	cout << "���� ������ ������ ����" << count << endl;
}

Monster::Monster(MonsterStatus _status)
{
	m_status = _status;
	count++;
	cout << "������ �����Ǿ����ϴ�!" << endl;
	cout << "���� ������ ������ ����" << count << endl;
}

Monster::~Monster()
{
	cout << "������ ���ŵǾ����ϴ�." << endl;
	count--; //ī��Ʈ 1 ����
	cout << "���� ������ ������ ����" << count << endl;
}

void Monster::SetMonsterStatus(string _name, int _hp, int defense, int attack)
{
	m_status = MonsterStatus(_name, _hp, defense, attack);
}

void Monster::Attack()
{
	cout << "������ ������ �����մϴ�!" << endl;
}

void Monster::Defence()
{
	cout << "������ �� �����մϴ�" << endl;
}
