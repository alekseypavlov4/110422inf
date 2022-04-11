#include <iostream>

using namespace std;

int qwe(int a);

int pln(int a);

int main()
{
	int a;
	cout<<"Input: ";
	cin>>a;

	qwe(a);
	pln(a);

	return 0;
}

int qwe(int a)
{
	int t = a;
    int b = 0;

    while (t != 0)
    {
        b = b * 10 + t % 10;
        t /= 10;
    }

	cout<<b<<endl;

	return 0;
}
