#include <iostream>

using namespace std;

int  main()
{
	string str1 = "This is my Book";
	string str2 = "Pen";

	cout << "Before replacement, string is :"<<str1<<'\n';
	//str1.replace( 11, 4, str2 );
	str1.replace( 11, 4, str2, 0, 3 );
	cout << "After replacement, string is :"<<str1<<'\n';

	return 0;
}
