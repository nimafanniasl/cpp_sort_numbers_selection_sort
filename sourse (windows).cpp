#include <iostream>
#include <conio.h>
using namespace std;

void  swap(unsigned long long int *  , unsigned long long int *);
void sort(unsigned long long int *x, unsigned long long int size,unsigned long long int t);
void ckeck();

unsigned long long   x; 
unsigned long long   *a = NULL; 
unsigned long long   *p; 
unsigned long long    size = 0 , c = 0 ,i;
unsigned long long    t;


main()
{
  cout<<"welcome to the \"sort numbers\" program !"<<endl<<endl;
cout<<"How do you want the numbers you give to be sorted?"<<endl<<endl<<"1: Ascending"<<endl<<"2: descending"<<endl<<endl<<"> ";
cin>>t;
ckeck();
cout<<endl<<"OK!"<<endl<<"enter numbers (When your numbers are finished, type q.): "<<endl;
  while( cin >> x)
	{
		if( c >= size)     
		{ 
			p = new unsigned long long int[size + 1];
			
			for( i = 0 ; i < size ; ++i)
			     p[i] = a[i];
				
			delete [] a; 
			
			a = p; 
			size += 1;
		}
		a[c++] = x;
	}

  sort(a,size,t);
    cout<<endl<<"sorted numbers: ";
  for(int i=0 ; i<size ; i++)          
	  cout<<p[i] << " , ";

  getch();
}

void ckeck()
{
	while (t>2){
		cerr<<"ERROR : Invalid number : Please try again!";
		cout<<endl<<"1: Ascending"<<endl<<"2: descending"<<endl<<endl<<"> ";
		cin>>t;
        ckeck();
	}
}

void sort(unsigned long long int *x, unsigned long long int size,unsigned long long int t)
{
if (t==1)
{
	
  unsigned long long int  *p , *m ,*end;    
			
	end = x + size-1;   
	
	for( ; x < end; ++x)
	{
		m = x;                        // Search minimum
		for( p = x+1; p <= end ; ++p) 
			if( *p < *m ) 
				m = p;
				
		swap( *x , *m); 
	}
}
if (t==2)
{
	unsigned long long int  *p , *m ,*end;    
			
	end = x + size-1;   
	
	for( ; x < end; ++x)
	{
		m = x;                        // Search maximum
		for( p = x+1; p <= end ; ++p) 
			if( *p > *m ) 
				m = p;
				
		swap( *x , *m); 
	}
}
}

void  swap(int *pa,int *pb)
{
	int t;
	
	t=*pa;
	*pa=*pb;
	*pb=t;
}


