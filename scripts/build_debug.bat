@echo off
title qmake and nmake build prompt
set MINGW_PATH=g:\SoftWare\QT6.8.3\Tools\mingw1310_64
set QT_DIR=g:\SoftWare\QT6.8.3\6.8.3\mingw_64
set BUILD_DIR=%cd%\build
set PRO_DIR=%cd%
set PATH=%MINGW_PATH%\bin;%QT_DIR%\bin;%PATH%


if not exist %BUILD_DIR% (
    md %BUILD_DIR%
)

cd build
qmake.exe %PRO_DIR%\XR-Map_3dVer_Qt6.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=console"
if exist %BUILD_DIR%\debug\XR-Map_3dVer_Qt6.exe del %BUILD_DIR%\debug\XR-Map_3dVer_Qt6.exe
@REM g:\SoftWare\QT6.8.3\Tools\QtCreator\bin\jom.exe -j4
%MINGW_PATH%\bin\mingw32-make -f Makefile.Debug
cd debug
if not exist %BUILD_DIR%\debug\Qt5Core.dll (
    windeployqt XR-Map_3dVer_Qt6.exe
)