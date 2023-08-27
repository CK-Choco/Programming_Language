@echo off
for /f "tokens=1-3 delims=/ " %%a in ('date /t') do (
    set "current_date=%%a-%%b-%%c"
)

for /f "tokens=1-3 delims=: " %%a in ('time /t') do (
    set "current_time=%%a-%%b"
)

set "zip_filename=2Player_[%current_date%]_[%current_time%].zip"
::Ore=路徑名稱
7z a -tzip "%zip_filename%" "Ore"