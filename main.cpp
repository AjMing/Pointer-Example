#define SIZE    10
#include <iostream>
#include <string.h>
using namespace std;

int main() {
int *pa, *pb,  temp,i;

//	int a[SIZE] = {	1, 2, 3, 4, 5, 	6, 7, 8, 9, 10 }; 
	int p_size;

  cout<<"How big is your array:";
  cin>>p_size;
  pa=new int[p_size];
 
 
  for(i=0 ;i<p_size ; i++,pa++){
    *pa=i+1;
  }
 
  pa-=p_size;

	cout<<"Original: ";
	for (i = 0; i < p_size - 1; i++,pa++)
	  cout<<*pa<<" ";
	
  cout<<*pa<<endl;

  pb=pa;
	pa -=p_size-1 ;  
  //pa=pa+size-1

  cout<<"Reverse: ";
	for (i = 0; i < p_size / 2; i++)  {
		temp = *pa;  
		*pa = *pb;  
		*pb = temp;
		pa++;  pb--;
	}

  pa-=  p_size/2 ;

	for (i = 0; i < p_size - 1; i++,pa++)
	  cout<<*pa<<" ";
	
  cout<<*pa<<endl;

 pa-=p_size-1;
 delete []pa;

	return 0;
}