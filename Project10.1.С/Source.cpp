#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

bool Contain();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "×ט ÷ 'SQ' אבמ 'QS' ג פאיכ³ t.txt: " << Contain() << endl;
	if (Contain())
		cout << "yes" << endl;
	else
		cout << "no" << endl;
    return 0;
}

bool Contain()

{
    ifstream t("t.txt");
    string s;

	int j = 0;
	char q[] = "SQ";
	char q1[] = "QS";

    getline(t, s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (((s[i] == q[j] && s[i + 1] == q[j + 1]) || (s[i] == q1[j] && s[i + 1] == q1[j + 1])) && s[i] != '\0')
            return true;
    }
    return false;
}