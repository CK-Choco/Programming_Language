#include <iostream>
#include <time.h>
using namespace std;

template<typename T> class Gift
{
	private:	
		const string items[6] = { "小電鍋","行動電源","藍芽耳機",
								   "讀卡機","藍芽滑鼠","USB隨身碟" };
	protected:
		T no; //獎品號碼

		string getItem() //取得獎品名稱
		{
			return items[no];
		}

	public:	
		Gift(T n)  //建構元
		{
			no = n;
		}		
};

template<typename T1, typename T2, typename T>
class Lottery :protected Gift<T>
{
	private:
		T2 fgPresent; //是否出席

	public:		
		T1 name; //中獎者姓名

		Lottery(T1 str, T2 fg, T no=5):Gift<T>(no)
		{
			name = str;
			fgPresent = fg;			
		}

		string getPrize() //抽獎
		{
			if (fgPresent) //有出席者，可以抽前5種獎品
			{
				Gift<T>::no = rand() % 10;
				Gift<T>::no = (Gift<T>::no > 4) ? 5 : Gift<T>::no;
			}
			else
				Gift<T>::no = 5; //未出席者只能領取第6種獎品
			
			return Gift<T>::getItem();
		}

		string getPresent()
		{
			return (fgPresent == true) ? "出席抽獎" : "未出席抽獎";
		}
};

int main()
{
	Lottery<string, bool, int> Wang("王小明", false);
	Lottery<string, bool, int> Mary("王瑪麗", true);
	Lottery<string, bool, int> Li("李小強", true);

	srand((unsigned)time(NULL));

	cout << Wang.name << "，" << Wang.getPresent() <<
		"，獎品：" << Wang.getPrize() << endl;

	cout << Mary.name << "，" << Mary.getPresent() <<
		"，獎品：" << Mary.getPrize() << endl;

	cout << Li.name << "，" << Li.getPresent() <<
		"，獎品：" << Li.getPrize() << endl;

	system("pause");
}