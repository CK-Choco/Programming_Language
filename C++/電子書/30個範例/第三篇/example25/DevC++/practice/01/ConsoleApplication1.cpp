#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file;
	char ch1 = 'A',ch2;
	float ft1[3] = { 3.14,1.23, 2.56 },ft2[3];
	char str1[] = "���w�A�A�n�C", str2[80];

	file.open("doc.txt", ios::binary | ios::out);
	if (!file)
	{
		cout << "�L�k�إ��ɮסC" << endl;
		exit(0);
	}

	cout << "�g�J���...";
	file.write((char *)&ch1, sizeof(ch1));
	file.write((char*)& ft1, sizeof(ft1));
	file.write(str1, sizeof(str1));
	file.close();
	cout << "OK." << endl;

	cout << "Ū�����..." << endl;
	file.open("doc.txt", ios::binary | ios::in);
	file.read((char*)& ch2, sizeof(ch2));
	file.read((char*)& ft2, sizeof(ft2));
	file.read(str2, sizeof(str2));
	file.close();
	
	cout << ch2 << endl;
	for (auto item : ft2)
		cout << item << " ";
	cout << endl;
	cout << str2 << endl;
	
	system("pause");
}

