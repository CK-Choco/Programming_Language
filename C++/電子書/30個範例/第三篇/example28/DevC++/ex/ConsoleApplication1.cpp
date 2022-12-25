#include <iostream>
using namespace std;

class Stand
{
	private:
		string* coffee;  //�@�ئW��
		int* price;      //�@�س��
		int* total;      //�c��ƶq
		int number;      //�c�檺�@���`��

	public:
		string  name;    //���W

		Stand(string str,int num)  //�غc��
		{
			name = str;
			coffee = NULL;
			price = NULL;
			total = NULL;
			if (num > 0)
			{
				number = num;
				coffee = new string[number];
				price = new int[number];
				total = new int[number];
			}
			else
				number = 0;
		}		

		string getCoffee(int index)  //���o�@�ئW��
		{
			return coffee[index];
		}

		int getPrice(int index)  //���o�@�ت����
		{
			return price[index];
		}

		int getTotal(int index)  //���o�@�ت��c��ƶq
		{
			return total[index];
		}

		void setCoffee(int index,string name,int price)  //�]�w�@�ئW�ٻP���
		{  
			coffee[index] = name;
			this->price[index] = price;
		}

		void setTotal(int index, int total) // �]�w�c��ƶq
		{
			this->total[index] = total;
		}

		~Stand()  //�Ѻc��
		{
			if (number >= 1)
			{
				delete[] coffee;
				delete[] price;
				delete[] total;
			}
		}		
};

int main()
{
	int coffeeNum = 3;
	Stand coff("�@�ؤp�]", coffeeNum);
	int price, total;
	string name;

	//��J�@�ت��W�ٻP���
	for (int i = 0;i< coffeeNum;i++)
	{
		cout << "��J�@��" << i + 1 << "���W�ٻP����G";
		cin >> name >> price;
		coff.setCoffee(i, name, price);
	}

	//��J�@�ت��c��ƶq
	for (int i = 0; i < coffeeNum; i++)
	{
		cout << coff.getCoffee(i) << "���c��ƶq�G";
		cin >> total;
		coff.setTotal(i , total);
	}

	//��ܩ@�سc�⪺������T
	system("cls");
	cout << "==== " << coff.name << " ====" << endl;
	for (int i = 0; i < coffeeNum; i++)
	{
		cout << coff.getCoffee(i) << "�@�ءA����G";
		cout << coff.getPrice(i) << "�A��F";
		cout << coff.getTotal(i) << "�M�C" << endl;
	}

	system("pause");
}