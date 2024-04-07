#include <iostream>
using namespace std;
//������ ���� ����

class Tea
{
public:
	virtual void Info() { cout << "�̰��� ���Դϴ�." << endl; };
};
class Lipton : public Tea
{
public:
	void Info() { cout << "�̰��� ���� Ƽ�Դϴ�." << endl; };
};
class Kombu : public Tea
{
public:
	void Info() { cout << "�̰��� �޺����Դϴ�." << endl; }
};
class Honest : public Tea
{
	void Info() { cout << "�̰��� ��Ͻ�Ʈ Ƽ�Դϴ�. " << endl; }
};

void SelectMenu(Tea* tea)
{
	tea->Info();
}

int main()
{
	int select;
	while (true)
	{
		cout << "�޴��� �������ּ��� 1. ���� Ƽ 2. �޺��� 3. ��Ͻ�Ʈ Ƽ >> ";
		cin >> select;
		Tea* tea = NULL;
		switch (select)
		{
		case 1:
			tea = new Lipton(); break;
		case 2:
			tea = new Kombu(); break;
		case 3:
			tea = new Honest(); break;
		}

		if (tea != NULL)
		{
			tea->Info();
		}
		else
		{
			cout << "�߸��� �Է��Դϴ�." << endl;
			exit(0);
		}
	}
	return 0;
}