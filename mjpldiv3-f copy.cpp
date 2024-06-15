#include<iostream>
#include<algorithm>
#define MAX_D 1000000000
using namespace std;
int counts;
char ch;
int a [10];
int multiple(int i,int j){
	int x=0;
	for(int k=i;k<j;k++){
		x=x*10;
		x+=a[k];
	}
	return x;
}
void mindiff(){
  int result =MAX_D;
  int length1 = counts/2;
  do
  {
  	if(a[0]==0||a[length1]==0) continue;
  	int x1 =multiple(0,length1);
  	int x2 =multiple(length1,counts);
  	result =min(abs(x2-x1),result);
  	
  }while(next_permutation(a,a+counts));
  if(counts==2)
  {
  	result =abs(a[1]-a[0]);
  }
  printf("%d\n",result);
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		counts=0;
		do{
			scanf("%d",&a[counts]);
			counts++;
		}while((ch=getchar())!='\n');
		mindiff();
	}
	return 0;
	
}