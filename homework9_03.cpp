#include <iostream>
using namespace std;
#include <string.h>
const int N = 10000;
// 在此处补充你的代码
#define NAMECHARS 20
class Worker
{
protected:
    char name[NAMECHARS+1];
    int level;
    float reward;
public:
    Worker(){}
    Worker(char *name, int level):level(level)
    {
        strcpy(this->name, name);
    }
    virtual float getSalary() = 0;
    virtual void infoList() = 0;
    void setReward(float reward)
    {
        this->reward = reward;
    }
};
class HourWorker:public Worker
{
protected:
    float hour;
public:
    HourWorker(){}
    HourWorker(char *name, int level):Worker(name, level){}
    HourWorker(char *name, int level, float hour):Worker(name, level),hour(hour){}
    void setHour(float hour)
    {
        this->hour = hour;
    }
    float getSalary()
    {
        return hour*level;
    }
    void infoList()
    {
        cout<<name<<" "<<level<<" "<<hour<<" "<<getSalary()<<" "<<reward<<endl;
    }
};
class PieceWorker:public Worker
{
protected:
    int piece;
public:
    PieceWorker(){}
    PieceWorker(char *name, int level):Worker(name, level){}
    PieceWorker(char *name, int level, int piece):Worker(name, level),piece(piece){}
    void setPiece(int piece)
    {
        this->piece = piece;
    }
    float getSalary()
    {
        return piece*level;
    }
    void infoList()
    {
        cout<<name<<" "<<level<<" "<<piece<<" "<<getSalary()<<" "<<reward<<endl;
    }
};
void setReward(Worker *pWorker, float reward)
{
	pWorker->setReward(reward);
}
int main()
{
	Worker* pWorkerArr[N] = {NULL};
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		char name[NAMECHARS+1];
		int level;
		int choice;
		cin >> name >> level >> choice;
		switch (choice )
		{
		case 1:
			{	float hour;
				cin >> hour;
				if (choice%2)
					pWorkerArr[i] = (Worker*) new HourWorker(name,level,hour);
				else
				{
					HourWorker *p =  new HourWorker(name, level);
					p->setHour(hour);
					pWorkerArr[i] = (Worker*)p;
				}
			}
			break;
		case 2:
			{	int piece;
				cin >> piece;
				if (choice % 2)
					pWorkerArr[i] = (Worker*) new PieceWorker(name,level,piece);
				else
				{
					PieceWorker *p = new PieceWorker();
					p->setName(name);
					p->setLevel(level);
					p->setPiece(piece);
					pWorkerArr[i] = (Worker*)p;
				}
			}
			break;
		}
	}
	int index;
	float reward;
	cin >> index>>reward;
	if (index >= 0 && index < n)
		setReward(pWorkerArr[index], reward);	
	float totalSalary = 0.0f;
	for( int i=0;i<n;i++)
	{
		if (pWorkerArr[i] != NULL)
		{
			totalSalary += pWorkerArr[i]->getSalary();
			pWorkerArr[i]->infoList();
		}
	}
	cout << totalSalary << endl;

	for (int i = 0; i<N; i++)
	{
		if (pWorkerArr[i] != NULL)  delete pWorkerArr[i];
	}
    return 0;
}