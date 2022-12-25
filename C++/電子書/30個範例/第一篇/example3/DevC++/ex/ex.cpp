/*
	範例3：此範例用於示範C++的判斷敘述if...else
*/
#include <iostream>
using namespace std;

int main()
{
	int iScore; //平均成績
	char cLoc, cProof;

	cLoc = 'N'; //預設未居住本里
	cProof = 'N'; //預設未有清寒證明

	cout << "是否居住在本里(Y/N)：";
	cin >> cLoc;
	cLoc = toupper(cLoc);
	cin.ignore(80, '\n');

	cout << "是否有清寒證明(Y/N)：";
	cin >> cProof;
	cProof = toupper(cProof);
	cin.ignore(80, '\n');

	cout << "輸入平均成績：";
	cin >> iScore;

	if (cLoc == 'Y' && (iScore >= 80 || cProof == 'Y'))
		cout << "符合申請資格" << endl;
	else
		cout << "不符合申請資格" << endl;

	system("pause");
}
