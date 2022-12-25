#include <iostream>
#include <conio.h>
using namespace std;

#define STUD_NUM 5 //學生總人數

int main()
{
	int lastID = 10903; //最後一個學號
	int studID[STUD_NUM] = { 10901,10902,lastID }; //學號
    string studName[STUD_NUM] = { "王小明","李小強","真美麗" };  //姓名
    int studScore[STUD_NUM] = { 90,67,88 };  //成績
    int select; // 選擇哪項操作
    int studNum = 3; //已經有了3筆學生資料
    int ID; //輸入的學號	
	int score; //輸入的學生分數
	string name; //輸入的學生姓名
	int No; //插入學生資料的位置
	int fg;  //用於判斷操作是否成功

    while (true)
    {      
        //------ 顯示選單 --------------
		system("cls");
        cout << "1. 修改資料" << endl;
        cout << "2. 刪除資料" << endl;
        cout << "3. 查詢資料" << endl;
        cout << "4. 插入資料" << endl;
        cout << "5. 排序資料" << endl;
        cout << "6. 顯示資料" << endl;
        cout << "7. 結束\r\n" << endl;
        cout << "輸入選擇(1-7)：";
        cin >> select;
        cin.ignore(80, '\n');

        if (select < 1 || select>7)
        {
            cout << "輸入錯誤，按任何鍵繼續...";
            while (!_kbhit());
            continue;
        }

        //----- 處理各種操作 -------
        system("cls");
        switch (select)
        {
            case 1: 
                cout << "==== 修改資料 ====" << endl;
                cout << "輸入修改學生的學號：";
                cin >> ID;
				fg = false;  //表示資料尚未修改
				for (int i = 0; i < studNum; i++)
					if (studID[i] == ID) //找到欲刪除的學生學號
					{
						cout << "輸入姓名與分數：";
						cin >> studName[i] >> studScore[i];
						fg = true; //表示資料已修改
						break;
					}

				if (fg)
					cout << "修改成功，";
				else
					cout << "輸入錯誤，";                                         
                break;

            case 2:
                cout << "==== 刪除資料 ====" << endl;				
				cout << "輸入欲刪除學生的學號：";
				cin >> ID;
				
				fg = false;  //表示資料尚未刪除
				for(int i=0;i<studNum;i++)
					if (studID[i] == ID) //找到欲修改學生的學號
					{												
						for (int j = i; j < studNum - 1; j++)
						{
							studID[j] = studID[j + 1];
							studName[j] = studName[j + 1];
							studScore[j] = studScore[j + 1];
						}
					
						studNum--; //陣列元素數量減1
						fg = true; //表示資料已刪除
						break;
				    }					
				    
				if(fg)
					cout << "刪除成功，";
				else
					cout << "輸入錯誤，";			
                break;

            case 3:
                cout << "==== 查詢資料 ====" << endl;
				cout << "輸入查詢學生的學號：";
				cin >> ID;

				fg = false;  //表示資料尚未找到
				for (int i = 0; i < studNum; i++)
					if (studID[i] == ID) //找到欲查詢學生的學號
					{
						cout << "學號：" << studID[i] << "， ";
						cout << "姓名：" << studName[i] << "， ";
						cout << "分數：" << studScore[i] << endl;
						fg = true; //表示資料已找到
						break;
					}

				if (!fg)
					cout << "輸入錯誤，";					
                break;

            case 4:
                cout << "==== 插入資料 ====" << endl;
				//---- 判斷陣列空間是否已滿 --------------
				if (studNum + 1 > STUD_NUM)
				{
					cout << "空間已滿，";
					break;
				}
				//------ 輸入插入資料的位置 ------------
				cout << "輸入欲插入在哪個位置之後(0-" << studNum << ")：";
				cin >> No;
				if (No < 0 || No > studNum)
				{
					cout << "輸入錯誤，";
					break;
				}
				//------ 輸入資料 ---------------
				cout << "輸入姓名與分數：";
				cin >> name >> score;
				cin.ignore(80, '\n');

				//----- 開始搬移元素 ----------		 
				for (int i = studNum; i > No; i--)
				{
					studID[i] = studID[i - 1];
					studName[i] = studName[i - 1];
					studScore[i] = studScore[i - 1];
				}

				lastID++; //學號加1
				studID[No] = lastID; //寫入學號
				studName[No] = name; //寫入姓名
				studScore[No] = score; //寫入分數
				studNum++;	 //元素數量加1
				cout << "資料插入成功，";
                break;

            case 5:
                cout << "==== 排序資料 ====" << endl;
				for (int i = 0; i < studNum; i++)
				{
					for (int j = studNum; j >= i + 1; j--)
					{
						if (studScore[j - 1] < studScore[j])
						{
							swap(studScore[j - 1], studScore[j]);
							swap(studName[j - 1], studName[j]);
							swap(studID[j - 1], studID[j]);
						}
					}
				}
				cout << "資料排序完畢，";
                break;

            case 6:
                cout << "==== 顯示資料 ====" << endl;
                for (int i = 0; i < studNum; i++)
                {
                    cout << "學號：" << studID[i] << "， ";
                    cout << "姓名：" << studName[i] << "， ";
                    cout << "分數：" << studScore[i] << endl;
                }
                break;

            case 7:
                exit(0);              
        }  //end of weitch  
       
        cout << "按任何鍵繼續...";
        while (!_kbhit());
		cin.ignore(80, '\n');
    }  //end of while

    system("pause");
}
 