#include <iostream>
using namespace std;
// 在此处补充你的代码
class CComplex
{
    private:
    double RealNum;
    double ImagNum;
    public:
    CComplex(double Real,double Imag):RealNum(Real),ImagNum(Imag){}
    double GetRealNum() const
    {
        return RealNum;
    }
    double GetImagNum() const
    {
        return ImagNum;
    }
};
int main()
{
double Real,Imag;
cin>>Real>>Imag;
const CComplex num1(Real,Imag);

cout<<'('<<num1.GetRealNum()<<','<<num1.GetImagNum()<<')'<<endl;
return 0;
}