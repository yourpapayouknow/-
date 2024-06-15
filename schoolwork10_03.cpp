#include <iostream>
#include <algorithm>
using namespace std;
class Rectangle
{
    public:
    int w,l;
    void set()
    {
        cin>>w>>l;
    }
    void show()
    {
        cout<<w<<endl<<l<<endl<<calcircle()<<endl<<calarea()<<endl;
    }
    int calcircle()
    {
        return 2*(w+l);
    }
    int calarea()
    {
        return w*l;
    }
};
int main()
{
    Rectangle R;
    R.set();
    R.show();
    return 0;
}