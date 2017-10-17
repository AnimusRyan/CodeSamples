# Enable Auto Logon example, where the default username is Administrator and the password is P4SSWORD!

$WinAutoLogonRegistry = "HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Winlogon"

Set-ItemProperty -Path $WinAutoLogonRegistry -Name "DefaultUserName" -Value "Administrator"
Set-ItemProperty -Path $WinAutoLogonRegistry -Name "DefaultPassword" -Value "P4SSWORD!"

# Important note: Must restart machine before autologon change takes effect.
Restart-Computer
