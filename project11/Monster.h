//#pragma once
////�ش��� �ߺ������� ���Ǵ� ���� �����ϱ� ����.
//#ifndef _MONSTER_H_
//#define _MONSTER_H_
//
//#include "MonsterStatus.h"
//
////��ó���� ifdef�� �ش簪�� ���ǵǾ��ִٸ鿡 ���� �۾��� ������ �� �ִ�.
//
////��ó���� ifndef�� �������� �Ǿ����� ���� ��쿡 ���� ������ ������ �� �� �ִ�.
//
////��ġ���� else�� ���� ifdef�� ifndef�� ���ǰ� �ݴ��� ��츦 �����ϴ� �ڵ�
//
////��ó���� endif�� ���ǹ��� �������� �־��ִ� �ڵ�
//
////Ŭ����(cpp + h)
////h: Ŭ�������� ������ �Լ��� ���� ����
//
//class Monster
//{
////private ->protected (2024-04-07)
//protected :
//	MonsterStatus m_status;
//	//Has a ���
//	//���� Ŭ������ ���� �������ͽ� Ŭ������ ������ �ִ�.
//	static int count; //������ ����(static : ����)
//public:
//	Monster();
//	Monster(MonsterStatus _status);
//	~Monster();
//	void SetMonsterStatus(string _name, int _hp, int defense, int attack);
//	void Attack();
//	void Defence();
//
//};
//
//#endif;
//
////�ش� �ڵ��� ó�����
////1. ifndef _MONSTER_H�� �д´�.
////2. _MONSTER_H�� ���ǵǾ� �����Ƿ�, endif ������ ������ �о��.