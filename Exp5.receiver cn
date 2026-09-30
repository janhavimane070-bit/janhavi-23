#include<iostream>
using namespace std;
int main(){
	int c[11];
	cout<<"Enter 11 bit hamming code";
	for(int i=0;i<11;i++)
	   cin>>c[i];
	 int d1 = c[0]^c[2]^c[4]^c[6]^c[8]^c[10];
	 int d2 = c[1]^c[2]^c[5]^c[6]^c[9]^c[10];
	 int d4 = c[3]^c[4]^c[5]^c[6];
	 int d8 = c[7]^c[8]^c[9]^c[10];
	 int error = d8*8+d4*4+d2*2+d1*1;
	
	  if(error==0)
	  {
	  	cout<<"No error detected"<<endl;
	  }
	  else
	  {
	  	cout<<"Error detected at position"<<error<<endl;
	  	c[error - 1] = c[error -1]^1;
	  	cout<<"Corrected hamming code";
	  	for(int i=0;i<11;i++)
	  	   cout << c[i];
	  	cout << endl;
	  }
	     cout<<"Original data";
	     
	  cout << c[2];
	  cout << c[4];
	  cout << c[5];
	  cout << c[6];
	  cout << c[8];
	  cout << c[9];
	  cout << c[10];
	  
	    cout << endl;
	      return 0;
	  
	 
}
