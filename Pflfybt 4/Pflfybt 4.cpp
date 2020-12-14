#include "fstream"
#include "iostream"
#include "string"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    ifstream in("f.txt");
    string a, b;
    while (in.peek() != EOF)
    {
        getline(in, a);
        if (a.size() > b.size())
        {
            b = a;
        }
    }
    cout << "Длина строки = " << b.size() << ". Самая длинная строка = " << b << endl;
    in.close();
    system("pause");
}
