//#include "MonsterStatus.h"
//
//
//
//
///// <summary>
///// ���͸� ������ ��� ȣ��Ǵ� ������(�⺻ ��= 0)
///// </summary>
//MonsterStatus::MonsterStatus() { m_name = ""; m_hp = 0; m_defense = 0; m_attack = 0; }
//
//MonsterStatus::MonsterStatus(string _name, int _hp, int _defense, int _attack) : m_name(_name), m_hp(_hp), m_defense(_defense), m_attack(_attack) { }
//
//MonsterStatus::~MonsterStatus() {  }
//
//void MonsterStatus::SetName(string _name) { m_name = _name; }
//
//void MonsterStatus::SetHp(int _hp) { m_hp = _hp; }
//
//void MonsterStatus::SetDefense(int _defense) { m_defense = _defense; }
//
//void MonsterStatus::SetAttack(int _attack) { m_attack = _attack; }
//
//void MonsterStatus::GetMonsterStatus()
//{
//	cout << "[" << m_name << " " << m_hp << " " << m_defense << " " << m_attack << "]" << endl;
//}