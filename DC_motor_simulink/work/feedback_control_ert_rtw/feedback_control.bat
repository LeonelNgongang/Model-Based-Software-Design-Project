call "setup_mssdk71.bat"

cd .

if "%1"=="" (nmake -f feedback_control.mk all) else (nmake -f feedback_control.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
