#include"Tac.h"
Teacher::Teacher(string na, int ag, string ge, string ad, string ph, string ti) :
	name(na), age(ag), gender(ge), address(ad), phone(ph), title(ti) {};

void Teacher::display()
{
	cout << "name:" << name << endl;
	cout << "age:" << age << endl;
	cout << "gender:" << gender << endl;
	cout << "address:" << address << endl;
	cout << "phone:" << phone << endl;
	cout << "title:" << title << endl;
}

Cadre::Cadre(string na, int ag, string ge, string ad, string ph, string po, string ti) :
	name(na), age(ag), gender(ge), address(ad), phone(ph), post(po), title(ti) {};

void Cadre::display()
{
	cout << "name:" << name << endl;
	cout << "age:" << age << endl;
	cout << "gender:" << gender << endl;
	cout << "address:" << address << endl;
	cout << "phone:" << phone << endl;
	cout << "post:" << post << endl;
	cout << "title:" << title << endl;
}

Teacher_Cadre::Teacher_Cadre(string na, int ag, string ge, string ad, string ph, string ti, string po, double wa)
	:Teacher(na, ag, ge, ad, ph, ti), Cadre(na, ag, ge, ad, ph, po, ti), wages(wa) {};
void Teacher_Cadre::display()
{
	Teacher::display();
	cout << "post:" << Cadre::post << endl;
	cout << "wages:" << wages << endl;
}

int main()
{
	Teacher_Cadre t1("龙共木木", 18, "男", "SCNU", "654321", "教授", "教学", 0.2);
	t1.display();
	return 0;
}
