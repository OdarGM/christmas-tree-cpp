#include <iostream> 
using namespace std;

int main()
{
	
	int n=20, SS;
	cout<<endl;
	
	for(int i=0; i<n; i++)
	{
		SS=(2*i)+1;
		
		for(int j=n-1-i; j>0; j--)
		  cout<<" ";
		  
		  for(int x=0; x<SS; x++)
		  cout<<"*";
		  
		  cout<<endl;
	}
	
	
	return 0;
}
