#include <iostream>
using namespace std;
#include<string>
class Car
{
public:
	string c_number;
	string c_type;
	string c_color;
	double c_money;
public:
	Car(string num, string t, string c, double m) :  c_number(num),c_type(t),c_color(c),c_money(m){}

	
	string get_num()
	const
	{
		return c_number;
	}
	string get_type()
	{
		return c_type;
	}
	string get_col()
	{
		return c_color;
	}
	double get_mon()
	{
		return c_money;
	}
	void set_num(string num)
	{
		this->c_number = num;
	}
	void set_type(string t)
	{
		this->c_type = t;
	}
	void set_col(string col)
	{
		this->c_color = col;
	}
	void set_mon(double mon)
	{
		this->c_money = mon;
	}
	virtual double rent(int days) {
		if (days <= 10) {
			return c_money* days;
		}
		else {
			return c_money * 10 + c_money * (days - 10) * 1.1;
		}
	}
	virtual ~Car() {}
};

class Truck :public Car
{
private:
	double lowei;
public:
	Truck(string lp, string t, string c, double dr, double lc) : Car(lp, t, c, dr), lowei(lc) {};
	void set_lowei(double lowei)
	{
		this->lowei = lowei;
	}
	double get_lowei()
	{
		return this->lowei;
	}
	double rent(int days)
	{
		if (days <= 10)
		{
			return c_money * days;
		}
		else
		{
			return c_money * 10 + c_money * (days - 10) * 1.1 * lowei;
		}
	}
	~Truck() {};
};

class Sedan:public Car
{
public:
	Sedan(string num, string t, string c, double mon) :Car(num, t, c, mon) {};
	~Sedan() {};
};

class CarRental
{
private:
	Car* car;
	int days;
public:
	CarRental(Car* c, int days) :car(c), days(days) {};
	Car* getcar()
	{
		return car;
	}
	int getdays()
	{
		return days;
	}
	void set_Car(Car* c)
	{
		car = c;
	}
	void set_days(int days)
	{
		this->days = days;
	}
	double get_rent()
	{
		return car->rent(days);
	}
	int get_days()
	{
		return days;
	}
	~CarRental() {};
};

int main()
{
	Car* car1 = new Truck("京A12345", "重型卡车", "白色", 300.0, 1.2);
	Car* car2 = new Sedan("京B67890", "小轿车", "黑色", 200.0);
	CarRental* rental1 = new CarRental(car1, 5);
	CarRental* rental2 = new CarRental(car2, 15);
	cout << "车牌号\t车型\t颜色\t租金" << endl;
	cout << car1->get_num() << "\t" << car1->get_type() << "\t" << car1->get_col() << "\t" << car1->rent(5) << endl;
	cout << car2->get_num() << "\t" << car2->get_type() << "\t" << car2->get_col() << "\t" << car2->rent(15) << endl;
	cout << "租用天数\t租金" << endl;
	cout << rental1->get_days() << "\t" << rental1->get_rent() << endl;
	cout << rental2->get_days() << "\t" << rental2->get_rent() << endl;
	delete car1;
	delete car2;
	delete rental1;
	delete rental2;


	return 0;
}