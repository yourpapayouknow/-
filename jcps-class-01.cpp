#include<iostream>
using namespace std;
#include<string.h>
class Student
{
protected:
	char *name;
	char *stunum;
	char *uniname;
public:
	Student();
	Student(char *pn, char* ps, char* pu);
	void print();
};
class GraStudent : public Student
{
    private:
    char *special;
    char *directorname;
    public:
    GraStudent(char *pn, char* ps, char* pu, char* sp, char* dn):Student(pn,ps,pu),special(sp),directorname(dn)
    {}
    void print()
    {
        Student::print();
        cout<<"special is "<<endl;
        cout<<"director is "<<directorname<<endl;
    }
};
void Student::print()
{
    cout<<"name="<<name<<endl;
    cout<<"StuNum="<<stunum<<endl;
    cout<<"university_name="<<uniname<<endl;
}
// 在此处补充你的代码
int main()
{
	Student stu1("Li","1600141","CUC");
	stu1.print();
	GraStudent gstu("Wang","1600240","CUC","Computer","Zhang");
    gstu.print();
    return 0;
}