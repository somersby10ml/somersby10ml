Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))

choco -V
choco install 7zip bandizip googlechrome processhacker python3 -y
choco install vcredist-all -y --install-arguments="/install /quiet /norestart"
refreshenv