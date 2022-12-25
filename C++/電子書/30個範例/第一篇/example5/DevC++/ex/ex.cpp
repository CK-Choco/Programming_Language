/* Dev C++ 使用 stoi()
1. 在工具>編譯器選項>一般>呼叫編譯器時加入以下的命令：
-std=c++11
2. 工具>編譯器選項>編譯設定>程式碼產生>語言標準(-std):
選擇：IOS C++11 
*/ 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int index;

	cout << "輸入郵局代號：";
	cin >> str;
	index = stoi(str);

	switch (index)
	{
		case 2825:
			str = "平溪郵局";
			break;

		case 11323:
			str = "金山郵局";
			break;

		case 11354:
			str = "瑞芳九份郵局";
			break;

		case 311555:
			str = "烏來郵局";
			break;

		default:
			str = "輸入錯誤";
			break;
	}

	cout << str << endl;
	system("pause");
}
