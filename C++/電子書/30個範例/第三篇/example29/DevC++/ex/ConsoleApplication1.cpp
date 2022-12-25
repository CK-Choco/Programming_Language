#include <iostream>
using namespace std;

class Person //�򥻸�ơG�m�W�P�~��
{
	private:
		string name = "";  //�m�W
		int age = 0;  //�~��

	protected:
		void setNameAge(string name, int age)
		{
			this->name = name;
			this->age = age;
		}

		void showInfo()  //�򥻸�ơG�����P�魫
		{
			cout << "�m�W�G" << name << "  �~�֡G" << age << endl;
		}
};

class Basic  //�򥻸�ơG�����P�魫
{
	public:
		double height = 0;  //����
		double weight = 0;  //�魫

		virtual double getBMI() = 0;  //�p��BMI
};

class Student :public Person, protected Basic //�ǥ͸��
{

	public:
		string classNo = "";  //�Z��
		int schNo = 0;  //���X

		void setNameAge(string name, int age)  //�]�w�m�W�P�~��
		{
			Person::setNameAge(name, age);
		}

		void setH_W(double height, double weight)  //�]�w�����P�魫
		{
			this->height = height;
			this->weight = weight;
		}

		virtual double getBMI()  //���s�w�qgetBMI()
		{
			double h = height / 100.0;
			return weight/ (h * h);
		}

		void showInfo()  //��ܸ��
		{
			Person::showInfo();
			cout << "�����G" << height << "cm  �魫�G" << weight << "kg ";
			cout << "BMI�G" << getBMI() << endl;
			cout << "�Z�šG" << classNo << "  " << schNo << "��" << endl;
		}
};

int main()
{
	Student Mary;

	Mary.setNameAge("������", 19);   //�]�w�m�W�P�~��
	Mary.setH_W(162, 50);           //�]�w�����P�魫
	Mary.classNo = "�@�~A�Z";        //�]�w�Z��
	Mary.schNo = 12;                //�]�w���X

	Mary.showInfo();                //��ܾǥͰ򥻸��
	
	system("pause");
}
