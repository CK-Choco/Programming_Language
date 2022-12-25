#include <iostream>
#include <fstream>
using namespace std;

#define MAX_NUM 2  // 一共2筆資料

struct _MYSTRUCT
{
	char name[20];  //姓名
	int age;        //年齡
	float data[2];  //身高與體重
};

//------------- 填寫資料 ----------------------------
void addData(_MYSTRUCT myStruct[])
{
	for (int i = 0; i < MAX_NUM; i++)
	{
		cout << "輸入姓名：";
		cin >> myStruct[i].name;
		cout << "輸入年齡：";
		cin >> myStruct[i].age;
		cout << "輸入身高(公尺)與體重(公斤)(使用空白隔開)：";
		cin >> myStruct[i].data[0] >> myStruct[i].data[1];
	}
}
//------------- 寫入資料 ----------------------------
bool writeData(_MYSTRUCT myStruct[])
{
	fstream file;
	bool fg = true;

	cout << "----- 寫入資料 -----" << endl;
	file.open("doc.data",ios::binary | ios::out);
	if (!file)
		fg = false;
	else
	{	
		file.write((char*)& myStruct[0], sizeof(_MYSTRUCT)*MAX_NUM);
		if(!file.good())			
			fg = false;	

		file.close();
	}
	return fg;
}
//------------- 讀取資料 ----------------------------
bool readData(_MYSTRUCT rStruct[])
{
	fstream file;
	bool fg = true;

	cout << "----- 讀取資料 -----" << endl;
	file.open("doc.data", ios::binary | ios::in);
	if (!file)
		fg = false;

	for (int i = 0; i < MAX_NUM; i++)
	{
		file.read((char*)& rStruct[i], sizeof(_MYSTRUCT));
		if (!file.good())
		{
			fg = false;
			break;
		}
	}

	file.close();
	return fg;
}

//------------- 顯示資料 ----------------------------
void showData(_MYSTRUCT rStruct[])
{
	cout << "----- 顯示資料 -----" << endl;
	for (int i = 0; i < MAX_NUM; i++)
	{
		cout << "姓名：" << rStruct[i].name << endl;
		cout << "年齡：" << rStruct[i].age << endl;
		cout << "身高：" << rStruct[i].data[0] << endl;
		cout << "體重：" << rStruct[i].data[1] << endl << endl;
	}
}

int main()
{
	_MYSTRUCT myStruct[MAX_NUM],rStruct[MAX_NUM];
	
	addData(myStruct);  //新增資料
	
	if (!writeData(myStruct))  //寫入資料
		cout << "寫入資料錯誤" << endl;
	else
	{
		if (!readData(rStruct))  //讀取資料
			cout << "讀取資料錯誤" << endl;
		else			
			showData(rStruct);  //顯示資料
	}	

	system("pause");
}
