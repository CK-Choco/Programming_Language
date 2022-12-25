#include <iostream>
using namespace std;

class Person //基本資料：姓名與年齡
{
	private:
		string name = "";  //姓名
		int age = 0;  //年齡

	protected:
		void setNameAge(string name, int age)
		{
			this->name = name;
			this->age = age;
		}

		void showInfo()  //基本資料：身高與體重
		{
			cout << "姓名：" << name << "  年齡：" << age << endl;
		}
};

class Basic  //基本資料：身高與體重
{
	public:
		double height = 0;  //身高
		double weight = 0;  //體重

		virtual double getBMI() = 0;  //計算BMI
};

class Student :public Person, protected Basic //學生資料
{

	public:
		string classNo = "";  //班級
		int schNo = 0;  //號碼

		void setNameAge(string name, int age)  //設定姓名與年齡
		{
			Person::setNameAge(name, age);
		}

		void setH_W(double height, double weight)  //設定身高與體重
		{
			this->height = height;
			this->weight = weight;
		}

		virtual double getBMI()  //重新定義getBMI()
		{
			double h = height / 100.0;
			return weight/ (h * h);
		}

		void showInfo()  //顯示資料
		{
			Person::showInfo();
			cout << "身高：" << height << "cm  體重：" << weight << "kg ";
			cout << "BMI：" << getBMI() << endl;
			cout << "班級：" << classNo << "  " << schNo << "號" << endl;
		}
};

int main()
{
	Student Mary;

	Mary.setNameAge("王瑪莉", 19);   //設定姓名與年齡
	Mary.setH_W(162, 50);           //設定身高與體重
	Mary.classNo = "一年A班";        //設定班級
	Mary.schNo = 12;                //設定號碼

	Mary.showInfo();                //顯示學生基本資料
	
	system("pause");
}
