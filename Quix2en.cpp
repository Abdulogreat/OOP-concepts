#include<iostream>
using namespace std;
class character
{
protected:
	string name;
	float health;
	float damage;
public:
	character()
	{
		name = "";
		health = 100;
		damage = 0;
	}

	character(string n)
	{
		name = n;
		health = 100;
		damage = 0;
	}
	float gethealth()
	{
		return health;
	}
	string getname()
	{
		return name;
	}
	void virtual attack(float d)
	{
		health = health - d;
	}
	void display()
	{
		cout << health << endl;
	}

	~character()
	{

	}
};
class warrior :public character
{
public:
	warrior(string n) :character(n)
	{
	};
	void attack(float d)
	{
		health = health - d;
	}
};
class mage :public character
{
public:
	mage(string n) :character(n)
	{
	};
	void attack(float d)
	{
		health = health - d;
	}
	~mage()
	{

	}
};
class archer :public character
{

public:
	archer(string n) :character(n)
	{
	};
	void attack(float d)
	{
		health = health - d;
	}
	~archer()
	{

	}
};
int main()
{
	cout << "<<<<Hello!!!Welcome to fighter2>>>>" << endl;
	character** c1 = new character * [3];
	c1[0] = new warrior("warrior");
	c1[1] = new mage("mage");
	c1[2] = new archer("archer");
	bool condition = 1;
	cout << "Player select attacker and defenders : ";
	do {
		cout << endl << "Attacker : " << endl;
		int ch1;
		int ch2;
		cout << "Press 1 for warrior,2 for mage and 3 for archer : ";
		cin >> ch1;
		cout << endl << "Defender : " << endl;
		cout << "Press 1 for warrior,2 for mage and 3 for archer : ";
		cin >> ch2;
		if (ch1 == 1 && ch2 == 2)
		{
			if (c1[0]->gethealth() > 0 && c1[1]->gethealth() > 0)
			{
				c1[1]->attack(8);
			}
			else
			{
				cout << "One of the character is dead " << endl;
			}

		}
		else if (ch1 == 1 && ch2 == 3)
		{
			if (c1[0]->gethealth() > 0 && c1[2]->gethealth() > 0)
			{
				c1[2]->attack(8);
			}
			else
			{
				cout << "One of the character is dead " << endl;
			}
		}
		else if (ch1 == 2 && ch2 == 3)
		{
			if (c1[1]->gethealth() > 0 && c1[2]->gethealth() > 0)
			{
				c1[2]->attack(6);
			}
			else
			{
				cout << "One of the character is dead " << endl;
			}

		}
		else if (ch1 == 3 && ch2 == 2)
		{
			if (c1[2]->gethealth() > 0 && c1[1]->gethealth() > 0)
			{
				c1[1]->attack(3);
			}
			else
			{
				cout << "One of the character is dead " << endl;
			}
		}
		else if (ch1 == 2 && ch2 == 1)
		{
			if (c1[1]->gethealth() > 0 && c1[0]->gethealth() > 0)
			{
				c1[0]->attack(6);
			}
			else
			{
				cout << "One of the character is dead " << endl;
			}
		}
		else if (ch1 == 3 && ch2 == 1)
		{
			if (c1[2]->gethealth() > 0 && c1[0]->gethealth() > 0)
			{
				c1[0]->attack(3);
			}
			else
			{
				cout << "One of the character is dead " << endl;
			}
		}
		cout << "Health of warrior : ";
		c1[0]->display();
		cout << "Health of mage : ";
		c1[1]->display();
		cout << "Health of archer : ";
		c1[2]->display();
		if (c1[0]->gethealth() < 1 && c1[1]->gethealth() < 1|| c1[1]->gethealth()<1 && c1[2]->gethealth() < 1|| c1[0]->gethealth() < 1 && c1[2]->gethealth() < 1)
		{
			condition = 0;
			for (int i = 0; i < 3; i++)
			{
				if (c1[i]->gethealth() > 0)
				{
					cout << "The winner is " << c1[i]->getname() << endl;
				}
			}
			cout << ">>>>>>>>>>>>>>>>>>>>> Match over >>>>>>>>>>>>>>>>>>>>" << endl;
		}
	} while (condition == 1);
	system("pause");
	return 0;
}