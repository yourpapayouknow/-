//01:qm-输出学校、班级人数
#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class CMyclass
{
    
public:
    int num;
    CMyclass(int n) {
        num = n;
    }
    
    
};
class CMyschool
{    
    public:
        CMyschool(string, int, int);
        int name,boy,girl;
        void Display(CMyclass c);
};


void CMyschool::Display(CMyclass c) {
	cout << name << " " << boy << " " << girl << " " << c.num <<endl ;
}

void SUM(CMyschool t)
{
	cout <<t.boy+t.girl<<endl;
}

int main()
{
	int b;
	cin >> b ;
	CMyclass myclass( b);
	CMyschool myschool("CUC", 100, 120);
	myschool.Display(myclass);
	SUM(myschool);
	return 0;
}