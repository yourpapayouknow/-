/*#include <iostream>
using namespace std;
class B { 
	private: 
		int nBVal; 
	public: 
		void Print() 
		{ cout << "nBVal="<< nBVal << endl; } 
		void Fun() 
		{cout << "B::Fun" << endl; } 
		B ( int n ) { nBVal = n;} 
};
class D: public B { 
    private: 
        int nDVal; 
    public: 
        void Fun() 
        { cout << "D::Fun" << endl; } 
        void Print() 
        { 
            cout<< "nBval="<< 24 << endl;
            cout << "nDVal="<< nDVal << endl; } 
        D(int n):B(3 * n) { nDVal = n;} 
};
// 在此处补充你的代码
int main() { 
	B * pb; D * pd; 
	D d(4); d.Fun(); 
	pb = new B(2); pd = new D(8); 
	pb -> Fun(); pd->Fun(); 
	pb->Print (); pd->Print (); 
	pb = & d; pb->Fun(); 
	pb->Print(); 
	return 0;
}*/

#include <iostream>
using namespace std;

class B {
private:
    int nBVal;
public:
    void Print()
    { cout << "nBVal=" << nBVal << endl; }
    void Fun()
    { cout << "B::Fun" << endl; }
    B (int n) { nBVal = n; }
};

class D: public B {
private:
    int nDVal;
public:
    void Fun()
    { cout << "D::Fun" << endl; }
    void Print()
    {
        B::Print(); // 调用基类的Print函数来输出nBVal的值
        cout << "nDVal=" << nDVal << endl;
    }
    D(int n): B(3 * n) { nDVal = n; }
};

int main() {
    B *pb; D *pd;
    D d(4); d.Fun();
    pb = new B(2); pd = new D(8);
    pb->Fun(); pd->Fun();
    pb->Print(); pd->Print();
    pb = &d; pb->Fun();
    pb->Print();
    //delete pb; // 释放分配的内存
    //delete pd; // 释放分配的内存
    return 0;
}
