#include <iostream>
using namespace std;
#include <string.h>
class myString
{
	private:
		char* str;
		char length; 
	public:
		myString()
		{
			str = NULL;
			length = 0;
		}
	virtual	~myString()
		{
			if(length>0)
				delete []str;
		}
		myString(int n)
		{
			length = n;
			str = new char[length]; 
		}
		myString(char * _str,int n)
		{
			setString(_str,n);
		}
		void setString(char * string,int n)
		{
			if(n>length)
			{
				delete []str;
				str = new char[n];
				length = n; 
				strcpy(str,string);
			}
			else
				strcpy(str,string);
		}
		void print()
		{
			cout<<str<<endl;
		}
 } ;
// 在此处补充你的代码
myString * createString(int n)
{
    return new myString[n];
}
void output(myString *p,int n)
{
    for(int i = 0;i<n;i++)
    {
        p[i].print();
    }
}
void releaseString(myString *p)
{
    delete []p;
}
int main(int argc, char** argv) {

	int n;
	cin>>n;
	myString *p = createString(n);
	for(int i= 0;i<n;i++)
	{
		char ar[20];
		cin>>ar;
		p[i].setString(ar,strlen(ar));

	}
	output(p,n);
	releaseString(p);
	return 0;
}