@echo off
setlocal

set "EXE_PATH=%~dp0build\lab3.exe"

if not exist "%EXE_PATH%" (
    echo Ошибка: %EXE_PATH% не найден.
    pause
    exit /b 1
)
echo.

for %%n in (100 200 500 1000 2000 3000 5000 10000 15000) do @(
    for /L %%i in (1,1,50) do (
        echo
        "%EXE_PATH%" -g %%n -s -p
        echo.
    )
)

pause