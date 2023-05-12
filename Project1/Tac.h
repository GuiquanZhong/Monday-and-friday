#pragma once
#include<iostream>
using namespace std;

class Teacher
{
public:
	Teacher(string na, int ag, string ge, string ad, string ph, string ti);
	void display();
private:
	string name;
	int age;
	string gender;
	string address;
	string phone;
	string title;
};
class Cadre
{
public:
	Cadre(string na, int ag, string ge, string ad, string ph, string po, string ti);
	void display();
protected:
	string name;
	int age;
	string gender;
	string address;
	string phone;
	string post;
	string title;
};
class Teacher_Cadre :public Teacher, public Cadre
{
public:
	Teacher_Cadre(string na, int ag, string ge, string ad, string ph, string ti, string po, double wa);
	void display();
private:
	double wages;
};

