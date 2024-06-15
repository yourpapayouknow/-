#include<iostream>
#include<cstring>
using namespace std;

// 在此处补充你的代码
class person
{
    public:
    string m_name;
    person(){}
    person(string name):m_name(name){}
    virtual void speak()
    { cout<<"Love who who!"<<endl; }
};
class ShiFu:public person
{
    public:
    ShiFu(string name):person(name){}
    void speak(){
        cout<<m_name<<" is the best in the world!"<<endl;
    }
};
class TuDi:public person
{
    public:
    TuDi(string name):person(name){}
    void speak(){
        cout<<m_name<<" is the best in the world!"<<endl;
    }
};
void Call(person & pe){
	pe.speak();
}
int main(){
	string T,S1,S2;
	cin>>T;
	cin>>S1;
	cin>>S2;
	
	ShiFu Buqun(T);
	TuDi Chong(S1), Pingzhi(S2);
	person P;
	
	Call(Buqun);
	Call(Chong);
	Call(Pingzhi);
	Call(P);	
}