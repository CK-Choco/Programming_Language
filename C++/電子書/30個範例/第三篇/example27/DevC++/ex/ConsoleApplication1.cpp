#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

class Booth
{
	private :
		static float rent; //����
		float netProfit = 0; //�b�Q

	public:
		float revenue = 0;  //�禬		

		void compute() //�p�⯲���P�b�Q
		{
			float r;

			r=revenue * 0.1;
			rent += r;
			netProfit = revenue - r;
		}

		float getNetprofit() //�^�ǲb�Q
		{
			return netProfit;
		}

		static float getRent() //�^�ǯ���
		{
			return rent;
		}
};

float Booth::rent = 0;

int main()
{
	Booth *boothes=NULL;
	int number;  //�u��ƶq
	
	srand((unsigned)time(NULL));

	cout << "�u��ƶq�G";
	cin >> number;
	try {
		boothes = new Booth[number];
	}
	catch (...)
	{
		cout << "�u��t�m���~" << endl;
		exit(0);
	}

	cout.precision(2);
	for(int i=0;i<number;i++)
	{ 		
		boothes[i].revenue = rand() % 10 + 1;
		boothes[i].compute();
		cout << "�u�� " << i + 1 << " �b�Q= " << \
			fixed << boothes[i].getNetprofit() << endl;
	}

	cout << "\n�������J�G" << fixed << Booth::getRent() << endl;

	delete[] boothes;

	system("pause");
}
