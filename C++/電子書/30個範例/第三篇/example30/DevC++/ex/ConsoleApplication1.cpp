#include <iostream>
#include <time.h>
using namespace std;

template<typename T> class Gift
{
	private:	
		const string items[6] = { "�p�q��","��ʹq��","�Ūަվ�",
								   "Ū�d��","�Ū޷ƹ�","USB�H����" };
	protected:
		T no; //���~���X

		string getItem() //���o���~�W��
		{
			return items[no];
		}

	public:	
		Gift(T n)  //�غc��
		{
			no = n;
		}		
};

template<typename T1, typename T2, typename T>
class Lottery :protected Gift<T>
{
	private:
		T2 fgPresent; //�O�_�X�u

	public:		
		T1 name; //�����̩m�W

		Lottery(T1 str, T2 fg, T no=5):Gift<T>(no)
		{
			name = str;
			fgPresent = fg;			
		}

		string getPrize() //���
		{
			if (fgPresent) //���X�u�̡A�i�H��e5�ؼ��~
			{
				Gift<T>::no = rand() % 10;
				Gift<T>::no = (Gift<T>::no > 4) ? 5 : Gift<T>::no;
			}
			else
				Gift<T>::no = 5; //���X�u�̥u������6�ؼ��~
			
			return Gift<T>::getItem();
		}

		string getPresent()
		{
			return (fgPresent == true) ? "�X�u���" : "���X�u���";
		}
};

int main()
{
	Lottery<string, bool, int> Wang("���p��", false);
	Lottery<string, bool, int> Mary("�����R", true);
	Lottery<string, bool, int> Li("���p�j", true);

	srand((unsigned)time(NULL));

	cout << Wang.name << "�A" << Wang.getPresent() <<
		"�A���~�G" << Wang.getPrize() << endl;

	cout << Mary.name << "�A" << Mary.getPresent() <<
		"�A���~�G" << Mary.getPrize() << endl;

	cout << Li.name << "�A" << Li.getPresent() <<
		"�A���~�G" << Li.getPrize() << endl;

	system("pause");
}