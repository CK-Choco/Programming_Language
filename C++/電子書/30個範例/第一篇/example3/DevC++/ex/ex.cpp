/*
	�d��3�G���d�ҥΩ�ܽdC++���P�_�ԭzif...else
*/
#include <iostream>
using namespace std;

int main()
{
	int iScore; //�������Z
	char cLoc, cProof;

	cLoc = 'N'; //�w�]���~����
	cProof = 'N'; //�w�]�����M�H�ҩ�

	cout << "�O�_�~��b����(Y/N)�G";
	cin >> cLoc;
	cLoc = toupper(cLoc);
	cin.ignore(80, '\n');

	cout << "�O�_���M�H�ҩ�(Y/N)�G";
	cin >> cProof;
	cProof = toupper(cProof);
	cin.ignore(80, '\n');

	cout << "��J�������Z�G";
	cin >> iScore;

	if (cLoc == 'Y' && (iScore >= 80 || cProof == 'Y'))
		cout << "�ŦX�ӽи��" << endl;
	else
		cout << "���ŦX�ӽи��" << endl;

	system("pause");
}
