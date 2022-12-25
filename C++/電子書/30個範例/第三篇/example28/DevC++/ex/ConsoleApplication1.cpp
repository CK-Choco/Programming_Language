#include <iostream>
using namespace std;

class Stand
{
	private:
		string* coffee;  //咖啡名稱
		int* price;      //咖啡單價
		int* total;      //販售數量
		int number;      //販賣的咖啡總類

	public:
		string  name;    //店名

		Stand(string str,int num)  //建構元
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

		string getCoffee(int index)  //取得咖啡名稱
		{
			return coffee[index];
		}

		int getPrice(int index)  //取得咖啡的單價
		{
			return price[index];
		}

		int getTotal(int index)  //取得咖啡的販售數量
		{
			return total[index];
		}

		void setCoffee(int index,string name,int price)  //設定咖啡名稱與單價
		{  
			coffee[index] = name;
			this->price[index] = price;
		}

		void setTotal(int index, int total) // 設定販售數量
		{
			this->total[index] = total;
		}

		~Stand()  //解構元
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
	Stand coff("咖啡小館", coffeeNum);
	int price, total;
	string name;

	//輸入咖啡的名稱與單價
	for (int i = 0;i< coffeeNum;i++)
	{
		cout << "輸入咖啡" << i + 1 << "的名稱與售價：";
		cin >> name >> price;
		coff.setCoffee(i, name, price);
	}

	//輸入咖啡的販售數量
	for (int i = 0; i < coffeeNum; i++)
	{
		cout << coff.getCoffee(i) << "的販售數量：";
		cin >> total;
		coff.setTotal(i , total);
	}

	//顯示咖啡販售的相關資訊
	system("cls");
	cout << "==== " << coff.name << " ====" << endl;
	for (int i = 0; i < coffeeNum; i++)
	{
		cout << coff.getCoffee(i) << "咖啡，單價：";
		cout << coff.getPrice(i) << "，賣了";
		cout << coff.getTotal(i) << "杯。" << endl;
	}

	system("pause");
}