#include <tchar.h>
void MyOutputDebugStringA(const char* pFormat, ...) {
	char szData[500] = { 0, };
	va_list argptr;
	va_start(argptr, pFormat);
	vsprintf_s(szData, _countof(szData), pFormat, argptr);
	va_end(argptr);
	OutputDebugStringA(szData);
}
void MyMessageBox(const TCHAR* pFormat, ...) {
	TCHAR szData[500] = { 0, };
	va_list argptr;
	va_start(argptr, pFormat);
	_vstprintf(szData, _countof(szData), pFormat, argptr);
	va_end(argptr);
	MessageBox(NULL, szData, _T("MyMessageBox"), MB_OK | MB_ICONINFORMATION);
}
void MyOutputDebugString(const TCHAR* pFormat, ...) {
	TCHAR szData[500] = { 0, };
	va_list argptr;
	va_start(argptr, pFormat);
	_vstprintf(szData, _countof(szData), pFormat, argptr);
	va_end(argptr);
	OutputDebugString(szData);
}