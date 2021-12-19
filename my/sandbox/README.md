# Windows sandbox 
Package installation script via choco

## Using
Execute commands in **powershell** in **windows sandbox**
```shell
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://raw.githubusercontent.com/somersby10ml/somersby10ml/main/my/sandbox/install.ps1'))
```

## Install List
- 7zip
- bandizip
- googlechrome
- processhacker
- python3
- vcredist-all
