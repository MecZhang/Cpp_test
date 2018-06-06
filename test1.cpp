
#include <iostream>
// #include <iomanip.h>
#include <iomanip>
using namespace std;

struct sport {
	char num[4];
	double grade;
};

int main()
{
	sport a[12] = {{"001",13.6}, {"002",14.8}, {"010",12.0},
				   {"011",12.7}, {"023",15.6}, {"025",13.4},
				   {"031",14.9}, {"036",12.6}, {"037",13.4},
				   {"102",14.9}, {"325",15.3}, {"438",12.7}
	};
	sport temp;
	int i, j;
	int row = 12, col = 13;

	for(i=1; i< row; i++)
	{
		for(j=0; j<row-i; j++)
		{
			if(a[j].grade>a[j+1].grade)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout << setw(6) << "名次" << setw(6) << "编号" << setw(6) << "成绩" << endl;
	for(i=0; i<row; i++)
	{
		cout<<setw(6)<<(i+1)<<setw(6)<<a[i].num<<setw(6)<<a[i].grade<<endl;
	}

}

