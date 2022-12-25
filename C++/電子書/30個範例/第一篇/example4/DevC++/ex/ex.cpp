#include <iostream>
using namespace std;

int main()
{
	char graduated;  //Y: 大學畢業，N：未達大學畢業 
	string strSex;
	char  pSkill; //Y: 具備程式設計能力，N：不具備 
	char mFinished; //Y: 役畢  N：尚未服役

	cout << "輸入性別(女/男)：";
	cin >> strSex;

	cout << "是否大學畢業(Y/N)：";
	cin >> graduated;
	graduated = toupper(graduated);

	cout << "是否具備程式設計專長(Y/N)：";
	cin >> pSkill;
	pSkill = toupper(pSkill);

	if (strSex == "女") //女
	{
		if (graduated == 'Y')
		{
			if (pSkill == 'Y')
				cout << "符合錄用資格" << endl;
			else
				cout << "不具備程式設計技能" << endl;
		}
		else
			cout << "學歷未達大學" << endl;
	}
	else  //男
	{
		cout << "是否役畢(Y/N)：";
		cin >> mFinished;
		mFinished = toupper(mFinished);

		if (mFinished == 'Y')
		{
			if (graduated == 'Y')
			{
				if (pSkill == 'Y')
					cout << "符合錄用資格" << endl;
				else
					cout << "不具備程式設計技能" << endl;
			}
			else
				cout << "學歷未達大學" << endl;
		}
		else
			cout << "沒有役畢" << endl;
	}

	system("pause");
}