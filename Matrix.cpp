#include <iostream>
using namespace std;
#define s 10

void elements(int64_t m1[s][s],int64_t m2[s][s],int r1,int c1,int r2,int c2);
void multiply(int64_t m1[s][s],int64_t m2[s][s],int64_t m3[s][s],int r1,int c1,int r2,int c2);
void display(int64_t m3[s][s],int r1,int c2);

int main()
{
int64_t m1[s][s],m2[s][s],m3[s][s];
int r1,c1,r2,c2;

cout<<"*for the first matrix*"<<endl;
cout<<"enter the number of rows: ";
cin>>r1;
cout<<"enter the number of columns: ";
cin>>c1;

cout<<"\n*for the second matrix*"<<endl;
cout<<"enter the number of rows: ";
cin>>r2;
cout<<"enter the number of columns: ";
cin>>c2;

  if (c1 != r2)
  {
  cout<<"error. column of matrix 1 must be equal to row of matrix 2";
  return 0;
  }
  else
    
for(int i=0 ; i<r1 ; i++)
{
 for(int j=0 ; j<c2 ; j++)
 {
  m3[i][j] = 0;
 }
}
    
 elements(m1,m2,r1,c1,r2,c2);
 multiply(m1,m2,m3,r1,c1,r2,c2);
 display(m3,r1,c2);

return 0;
}

void elements(int64_t m1[s][s],int64_t m2[s][s],int r1,int c1,int r2,int c2)
{
    
	int i,j;
	cout<<"\nenter the elements of matrix 1\n";
	for(i=0 ; i<r1; i++)
	{
	 for(j=0 ; j<c1 ; j++)
     {
	 cout<<"element a"<<i+1<<j+1<<": ";
     cin>>m1[i][j];
     }
	}

	cout<<"\nenter the elements of matrix 2\n";
	for(i=0 ; i<r2 ; i++)
	{
	 for(j=0 ; j<c2 ; j++)
     {
	 cout<<"element b"<<i+1<<j+1<<": ";
	 cin>>m2[i][j];
     }
	}
	
}

void multiply(int64_t m1[s][s],int64_t m2[s][s],int64_t m3[s][s],int r1,int c1,int r2,int c2)
{
    
 int i,j,k;
 for(i=0 ; i<r1 ; i++)
 {
  for(j=0 ; j<c2 ; j++)
  {
   for(k=0 ; k<c1 ; k++)
   {
    m3[i][j] += m1[i][k] * m2[k][j];
   }
  }
 }

}

void display(int64_t m3[s][s],int r1,int c2)
{

 int i,j;
 cout<<"\n*output matrix*\n\n";
 for(i=0 ; i<r1 ; i++)
 {
  for(j=0 ; j<c2 ; j++)
  {
  cout<<m3[i][j]<<" ";
    if(j==c2-1)
	cout<<endl<<endl;
  }
 }
 
}


