#include<iostream>
using namespace std;
// 在此处补充你的代码
struct Rectangle
{
    int w,l;
};
void set(Rectangle *R)
{
    cin>>R->w>>R->l;
}
int calcircle(Rectangle R)
{
    return 2*(R.w+R.l);
}
int calarea(Rectangle R)
{
    return R.w*R.l;
}
int main()
{
	Rectangle R;
	set(&R);
	cout<<calcircle(R)<<endl<<calarea(R)<<endl;
	return 0;
}