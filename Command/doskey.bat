@echo off

::Windows 指令
::ip查詢
doskey ip=ipconfig /all
::顯示該資料夾內的資料，沒選擇就觸發者的目錄
doskey ls=dir /a$1$2$3$4$5
::關機
doskey 關機=shutdown /s /t $1 $T echo 啟動定時關機 
::重啟
doskey 重啟=shutdown /s /t $0 $T echo 正在重啟
::取消關機
doskey 取消=shutdown /a$T echo 停止定時關機




