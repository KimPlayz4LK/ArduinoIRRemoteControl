Set shell=CreateObject("WScript.Shell")
Set args=WScript.Arguments
For Each arg In args
shell.SendKeys arg
Next