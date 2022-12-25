#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

class Booth
{
	private :
		static float rent; //租金
		float netProfit = 0; //淨利

	public:
		float revenue = 0;  //營收		

		void compute() //計算租金與淨利
		{
			float r;

			r=revenue * 0.1;
			rent += r;
			netProfit = revenue - r;
		}

		float getNetprofit() //回傳淨利
		{
			return netProfit;
		}

		static float getRent() //回傳租金
		{
			return rent;
		}
};

float Booth::rent = 0;

int main()
{
	Booth *boothes=NULL;
	int number;  //攤位數量
	
	srand((unsigned)time(NULL));

	cout << "攤位數量：";
	cin >> number;
	try {
		boothes = new Booth[number];
	}
	catch (...)
	{
		cout << "攤位配置錯誤" << endl;
		exit(0);
	}

	cout.precision(2);
	for(int i=0;i<number;i++)
	{ 		
		boothes[i].revenue = rand() % 10 + 1;
		boothes[i].compute();
		cout << "攤位 " << i + 1 << " 淨利= " << \
			fixed << boothes[i].getNetprofit() << endl;
	}

	cout << "\n租金收入：" << fixed << Booth::getRent() << endl;

	delete[] boothes;

	system("pause");
}
