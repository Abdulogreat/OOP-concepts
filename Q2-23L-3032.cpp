//#include<iostream>
//using namespace std;
//class books
//{
//	string title;
//	string author;
//	int year;
//public:
//	books()
//	{
//		title = "";
//		author = "";
//		year = 0;
//	}
//	void settitle(string t)
//	{
//		title = t;
//	}
//	void setauthor(string a)
//	{
//
//		author = a;
//	}
//	void setyear(int y)
//	{
//		year = y;
//	}
//	int getyear()
//	{
//		return year;
//	}
//	string getauthor()
//	{
//		return author;
//	}
//	string gettitle()
//	{
//		return title;
//	}
//
//};
//class library 
//{
//	books* book;
//public:
//	library(int l)
//	{
//		book = new books[l];
//	}
//	void addBooks(int l)
//	{
//		cout << "<<<<<<<<<<ADD DETAILS HERE>>>>>>>>>>" << endl;
//		for (int i = 0; i < l; i++)
//		{
//			string t, a;
//			int y;
//			cout << "Details of book " << i + 1 << " here>>>>" << endl;
//			cout << "Title : ";
//			cin >> t;
//			cout << "Author : ";
//			cin >> a;
//			cout << "Publication Year : ";
//			cin >> y;
//			book[i].setauthor(a);
//			book[i].settitle(t);
//			book[i].setyear(y);
//		}
//	}
//	void display(int l)
//	{
//		cout << "Total books are " << l << endl;
//		cout << "Details of Books : " << endl;
//		for (int i = 0; i < l; i++)
//		{
//			cout << "Title : " << book[i].gettitle() << endl << "Author : " << book[i].getauthor() << endl << "Year : " << book[i].getyear() << endl;
//		}
//	}
//	void search(string some, int l)
//	{
//		for (int i = 0; i < l; i++)
//		{
//			if (some == book[i].gettitle()|| some == book[i].getauthor())
//			{
//				cout << "Title : " << book[i].gettitle() << endl << "Author : " << book[i].getauthor() << endl << "Year : " << book[i].getyear() << endl;
//				break;
//			}
//		}
//	}
//		~library()
//	{
//		delete[]book;
//		
//	}
//};
//int main()
//{
//	int l = 0;
//	cout << "Enter the number of books you want to add in the library : ";
//	cin >> l;
//	library lib(l);
//	lib.addBooks(l);
//	bool cond = 0;
//	int s = 0;
//	cout << "**************LIBRARY***************" << endl;
//	while (cond == 0)
//	{
//		cout << "Type 1 to search , 2 to show all books details or 3 to exit ";
//		cin >> s;
//		cout << endl;
//		if (s == 1)
//		{
//			string some;
//			cout << "Enter the title or authors name : ";
//			cin >> some;
//			lib.search(some, l);
//			cond = 1;
//		}
//		else if (s == 2)
//		{
//			lib.display(l);
//			cond = 0;
//		}
//		else if (s == 3)
//		{
//			cond = 1;
//			cout << "_______________CLOSING THE PROGRAM_________________" << endl;
//		}
//		
//	}
//	
//	return 0;
//}