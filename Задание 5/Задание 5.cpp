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
	char k;
	cin >> k;
	cout << "Кол-во строк, начинающихся с буквы '" << k << "' =" << endl;
	while (in.peek() != EOF) 
	{
		string n;
		getline(in, n);
		if (n[0] == k)
			cout << "\t" << n << endl;
	}
	in.close();
	system("pause");
	return 0;
}