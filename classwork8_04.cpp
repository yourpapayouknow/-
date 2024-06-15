#include<iostream>
using namespace std;
class Matrix{
	private:
		int M[4][4];
	public:
		Matrix()
		{int i,j;
			for(i=0;i<4;i++)
				for(j=0;j<4;j++)
					M[i][j]=0;	}
		Matrix(int a,int b)
		{
			int i,j;
			for(i=0;i<a;i++)
				for(j=0;j<b;j++)
					cin>>M[i][j];
		}
        Matrix operator +(Matrix &x)
        {
            Matrix temp;
            for(int i=0;i<4;i++)
                for(int j=0;j<4;j++)
                    temp.M[i][j]=M[i][j]+x.M[i][j];
            return temp;
        }
        Matrix operator -(Matrix &x)
        {
            Matrix temp;
            for(int i=0;i<4;i++)
                for(int j=0;j<4;j++)
                    temp.M[i][j]=M[i][j]-x.M[i][j];
            return temp;
        }
        void Print()
        {
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++)
                    cout<<M[i][j]<<" ";
                cout<<endl;
            }
        }
// 在此处补充你的代码
}; 
int main()
{
	Matrix x1(2,3),x2(2,3),x3;
	x3 = x1+x2;
	x3.Print();
	x3 = x1-x2;
	x3.Print();
	return 0;	
}