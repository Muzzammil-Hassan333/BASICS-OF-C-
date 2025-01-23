#include <iostream>
#include <clocale>
#include <cwchar>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    wchar_t whidechar=L'Ü';
    wprintf(L"Whide character is : %lc",whidechar);
}