//#include<iostream>
//using namespace std;
//
//
//class course
//{
//	string cname;
//	string ccode;
//public:
//	void setname(string name)
//	{
//		cname = name;
//	}
//	string getname()
//	{
//		return cname;
//	}
//	void setcode(string code)
//	{
//		ccode = code;
//	}
//	string getcode()
//	{
//		return ccode;
//	}
//	void add(string name, string code)
//	{
//		setname(name);
//		setcode(code);
//	}
//	void showcourses()
//	{
//
//		cout << "Name : ";
//		cout << getname();
//		cout << endl;
//		cout << "Code : ";
//		cout << getcode();
//		cout << endl;
//	}
//
//};
//class teacher
//{
//private:
//	string tname;
//	course* subt;
//public:
//	int tc = 0;
//	void add(int l, course* sub)
//	{
//		cout << "Enter the name of teacher : ";
//		cin >> tname;
//		cout << "number of courses he is teaching : ";
//		cin >> tc;
//		subt = new course[tc];
//		for (int i = 0; i < tc; i++)
//		{
//			string code;
//			int a = 0;
//			cout << "Course code for " << i + 1 << "course : ";
//			cin >> code;
//			for (int j = 0; j < 3; j++)
//			{
//				if (code == sub[j].getcode())
//				{
//					subt[a].setcode(code);
//					subt[a].setname(sub[j].getname());
//					a++;
//				}
//			}
//		}
//
//	}
//	void show(int i)
//	{
//		cout << "Teacher " << i + 1 << " details are below:" << endl;
//		cout << "Name : " << tname << endl;
//		cout << "Courses list : " << endl;
//		for (int j = 0; j < tc; j++)
//		{
//			cout << "Name: ";
//			cout << subt[j].getname() << endl;
//
//			cout << "Code: ";
//			cout << subt[j].getcode() << endl << endl;
//		}
//	}
//
//
//};
//class student
//{
//private:
//	string sname;
//	string sroll;
//	course* subs;
//public:
//
//	int nc;
//	void add(int l,course *sub)
//	{
//		nc = 0;
//		cout << "Enter the name of student : ";
//		cin >> sname;
//		cout << "Enter the roll no of student : ";
//		cin >> sroll;
//		
//		cout << "number of courses he has taken : ";
//		cin >> nc;
//		subs = new course[nc];
//		for (int i = 0; i < nc; i++)
//		{
//			string code;
//			int a = 0;
//			cout << "Course code for " << i + 1 << "course : ";
//			cin >> code;
//			for (int j = 0; j < 3; j++)
//			{
//				if (code == sub[j].getcode())
//				{
//					subs[a].setcode(code);
//					subs[a].setname(sub[j].getname());
//					a++;
//				}
//			}
//		}
//
//	}
//	void show(int i)
//	{
//		cout << "Student " << i + 1 << " details are below:" << endl;
//		cout << "Name : " << sname << endl << "Roll no : " << sroll << endl;
//		cout << "Courses list : " << endl;
//		for (int j= 0; j < nc; j++)
//		{
//			cout << "Name: ";
//			cout<<subs[j].getname()<<endl;
//			
//			cout  << "Code: ";
//			cout << subs[j].getcode() << endl << endl;
//		}
//	}
//
//};
//int main()
//{
//
//	course *sub=new course[3];
//	cout << "<<<<< Add details of courses >>>>>" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		string name = "", code = "";
//		cout << "Name : ";
//		cin >> name;
//		cout << "Code : ";
//		cin >> code;
//		sub[i].add(name, code);
//	}
//	
//	student* std = new student[3];
//	cout << "<<<<< Add details of students >>>>>" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		std[i].add(i,sub);
//	}	
//	teacher* tch = new teacher[3];
//	cout << "<<<<< Add details of teachers >>>>>" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		tch[i].add(i, sub);
//	}
//	cout << "----------COURSES----------" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		sub[i].showcourses();
//	}
//	cout << endl;
//	cout << "----------STUDENTS----------" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		std[i].show(i);
//	}
//	cout << "----------TEACHERS----------" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		tch[i].show(i);
//	}
//	
//
//	return 0;
//}
