Dim choice, scriptPath
scriptPath = WScript.ScriptFullName ' ���o��e VBS �ɮת�������|

' ��ܿ��~�T���A�ñN���s�אּ�u�O / �_�v
choice = MsgBox("���l.exe �w����B�@" & vbNewLine & "�O�_���ҡH", vbCritical + vbYesNo, "���~")

If choice = vbYes Then
    ' ���U�u�O�v(���� VBS)
    Dim shell
    Set shell = CreateObject("WScript.Shell")
    shell.Run "wscript.exe """ & scriptPath & """"
    Set shell = Nothing
Else
    ' ���U�u�_�v(�j������)
    WScript.Quit
End If
