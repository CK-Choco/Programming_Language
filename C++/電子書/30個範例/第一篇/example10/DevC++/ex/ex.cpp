#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int total = 0; //�I�\�`���B
	char select; //�I�\�s��
	bool fg = true; //�L�a�j�����X��
	
	while (fg)
	{
		//----------- ����\�I�ﶵ ----------------------		
		cout << "\n1.   ��X�G��  80\n2.   ���K�@�� 120\n3.   ���G���L  85\n"; 		
		cout << "4.   ��u�氮  75\n5.   �U�ȯ��զX 300\n6.   �{������\n";
		cout << "=================\n��J�s���G";		

		try
		{
			select = getchar();

			cin.ignore(80, '\n');

			if (!isdigit(select))	//�D��J�Ʀr
				throw "�п�J�Ʀr�C\n";

			if (select < '1' || select>'6')  //��J�W�L�d��
				throw "��J���~�A���s��J�C\n";

			switch (select)  //�p���\�I���B
			{
			case '1': total += 80;
				break;
			case '2': total += 120;
				break;
			case '3': total += 85;
				break;
			case '4': total += 75;
				break;
			case '5': total += 300;
				break;
			case '6': fg = false;
				break;
			}

			if (select != '6')	  //���O��ܵ����{���~�ݭn�Y�X�Y�^����
				throw total;
		}
		catch (char const* str)
		{
			cout << str << endl;
		}
		catch (int e)
		{
		    cout << "�@�@ " << total << "��" << endl;

			if (e < 250)
				cout << "�ٮt " << 250 - e << " ���~�F�̧C���O" << endl;
			else
			{
				cout << "�w�F�̧C���O" << endl;
				fg = false;
			}
		}
	}

	system("pause");
}
