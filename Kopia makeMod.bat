del mod.ff

xcopy english ..\..\raw\english /SY
xcopy ui ..\..\raw\ui /SY
xcopy ui_mp ..\..\raw\ui_mp /SY
xcopy mp ..\..\raw\mp /SY
copy /Y mod.csv ..\..\zone_source

cd ..\..\bin
linker_pc.exe -language english -compress -cleanup mod
cd ..\mods\deathrun_dev
copy ..\..\zone\english\mod.ff

pause