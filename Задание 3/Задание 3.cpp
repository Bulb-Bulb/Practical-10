#include "fstream"
#include "iostream"
#include "string"

using namespace std;

int main()
{
	setlocale(NULL, "Russian");
	ifstream in("f.txt");
	int count = 0;
	cout << "Введите букву = " << endl;
	char s;
	cin >> s;
	while (in.peek() != EOF)
	{
		string n;
		getline(in, n);
		if (n[0] == s)
			count++;
	}
	cout << count << " - кол-во строк, начинающихся с буквы '" << s << "'" << endl;
	in.close();
	system("pause");
	return 0;
}
