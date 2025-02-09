Dim choice, scriptPath
scriptPath = WScript.ScriptFullName ' 取得當前 VBS 檔案的完整路徑

' 顯示錯誤訊息，並將按鈕改為「是 / 否」
choice = MsgBox("腦子.exe 已停止運作" & vbNewLine & "是否重啟？", vbCritical + vbYesNo, "錯誤")

If choice = vbYes Then
    ' 按下「是」(重啟 VBS)
    Dim shell
    Set shell = CreateObject("WScript.Shell")
    shell.Run "wscript.exe """ & scriptPath & """"
    Set shell = Nothing
Else
    ' 按下「否」(強制關閉)
    WScript.Quit
End If
