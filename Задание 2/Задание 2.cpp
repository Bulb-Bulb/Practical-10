#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	string a;
	string b;
	while (in.peek() != EOF)
	{
		getline(in, a);
		int x = a.length();
		for (unsigned int i = 0; i < x; i++)
		{
			if (a[i] == 'C')
			{
				b += "C++ ";
			}
			else
			{
				b += a[i];
			}
		}
		out << b << endl;
	}
	in.close();
	out.close();
	system("pause");
}
