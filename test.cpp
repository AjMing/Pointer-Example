#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char **argv) {

if(strcmp(argv[1],"bubble")==0){

  cout<<"I'm doing a buble sort"<<endl;
}
else  cout<<"I'm not doing a buble sort"<<endl;


int N=argc-1;

int *arr=new int[N];
int i;

cout<<"My numbers are\n ";
for(i=0;i<N;i++){
  arr[i]=atoi(argv[i+1]);
  // *(arr+i) =atoi(* (argv+i+1)) 
  cout<<arr[i] <<endl;

}

int min;
 min=arr[0];
 for(i=1;i<N;i++){
    if(min>arr[i]) min=arr[i];
     
 }

cout<<"Min array is "<<min<< endl;

 delete []arr;
  //cout<< *(*(argv+2)+3) <<endl;// ->v
	return 0;
}