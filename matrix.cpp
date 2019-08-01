#include <iostream>

using namespace std;

class vctr;

class matrix
{
	int a[10][10],r,c;

	public:
		void getmatrix()
		{
			int i,j;
			cout<<"\n enter no of row and columns";
			cin>>r>>c;
			for(i=1;i<=r;i++)
				for(j=1;j<=c;j++)
				{
					cout<<"\n Enter the "<<i<<" row and"<<j<<" column value";
					cin>>a[i][j];
				}
		}

		void dismatrix()
		{
			int i,j;
			for(i=1;i<=r;i++)
			{	cout<<"\n";
				for(j=1;j<=c;j++)
					cout<<a[i][j]<<"\t";
			}
		}

		friend void multiply(matrix &,vctr &);
};

class vctr
{
	int a[10];
	int c;

	public:
		void getvector()
		{
			int i;
			cout<<"\n Enter no of columns such that no of columns in vector=no of rows in matrix";
			cin>>c;
			for(i=1;i<=c;i++)
			{
							
				cout<<"\n Enter the "<<i<<"column value";
				cin>>a[i];
			}

		}
		
		void disvector()
		{
			int i;
			for(i=1;i<=c;i++)
				cout<<a[i]<<"\t";
		}

		friend void multiply(matrix &,vctr &);
};

void multiply(matrix &m,vctr &v)
{
	int i,j,a[10]={0};
	if(m.r!=v.c)
		cout<<"\n Wrong value- cant proceed";
	else
	{
		for(i=1;i<=m.r;i++)
		{
			cout<<"\n";
			for(j=1;j<=v.c;j++)
				//i]+=m.a[i][j]*v.a[j];
				a[i]+=(m.a[i][j])*(v.a[j]);
		}

		for(i=1;i<=m.r;i++)
			cout<<a[i]<<"\t";
	}
}

int main()
{
	matrix m;
	vctr v;
	m.getmatrix();
	m.dismatrix();
	v.getvector();
	v.disvector();
	multiply(m,v);
}
