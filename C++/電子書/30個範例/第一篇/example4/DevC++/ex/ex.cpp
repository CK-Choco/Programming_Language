#include <iostream>
using namespace std;

int main()
{
	char graduated;  //Y: �j�ǲ��~�AN�G���F�j�ǲ��~ 
	string strSex;
	char  pSkill; //Y: ��Ƶ{���]�p��O�AN�G����� 
	char mFinished; //Y: �в�  N�G�|���A��

	cout << "��J�ʧO(�k/�k)�G";
	cin >> strSex;

	cout << "�O�_�j�ǲ��~(Y/N)�G";
	cin >> graduated;
	graduated = toupper(graduated);

	cout << "�O�_��Ƶ{���]�p�M��(Y/N)�G";
	cin >> pSkill;
	pSkill = toupper(pSkill);

	if (strSex == "�k") //�k
	{
		if (graduated == 'Y')
		{
			if (pSkill == 'Y')
				cout << "�ŦX���θ��" << endl;
			else
				cout << "����Ƶ{���]�p�ޯ�" << endl;
		}
		else
			cout << "�Ǿ����F�j��" << endl;
	}
	else  //�k
	{
		cout << "�O�_�в�(Y/N)�G";
		cin >> mFinished;
		mFinished = toupper(mFinished);

		if (mFinished == 'Y')
		{
			if (graduated == 'Y')
			{
				if (pSkill == 'Y')
					cout << "�ŦX���θ��" << endl;
				else
					cout << "����Ƶ{���]�p�ޯ�" << endl;
			}
			else
				cout << "�Ǿ����F�j��" << endl;
		}
		else
			cout << "�S���в�" << endl;
	}

	system("pause");
}