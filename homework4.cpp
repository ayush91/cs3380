// homework4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	list<string> firstlist;
	firstlist.push_back("Apple"); firstlist.push_back( "Banana"); firstlist.push_back( "Monkey"); firstlist.push_back( "Google"); firstlist.push_back("Yahoo");
	list<string> secondlist;
	secondlist.push_back("Banana"); secondlist.push_back( "Google");
	list<string> samewords(5);
	list<string>::iterator i;

	firstlist.sort();
	secondlist.sort();
	

	set_intersection(firstlist.begin(),firstlist.end(),
                 secondlist.begin(), secondlist.end(),
                 back_inserter(samewords));
	samewords.sort();
	for( i = samewords.begin(); i != samewords.end(); ++i)
		cout << *i << " ";
	cout << endl;
	
	

	system("PAUSE");
	return 0;
}

