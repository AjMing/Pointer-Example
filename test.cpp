#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  
  cout<<argc<<endl;
  int i;

  for(i=0;i<argc;i++){
      //   cout<<*(argv+i)<<endl;
       cout<<"*(argv+"<<i<<") is "<< argv[i]<<endl;


  }


  //atoi atof
 

  //cout<< *(*(argv+2)+3) <<endl;// ->v
	return 0;
}