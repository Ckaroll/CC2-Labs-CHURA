#include <iostream>
using namespace std;

int TamITE(char * cad){
	int s=0;
	for(int i=0;cad[i] !='\0';i++){
		s++;
	}
	return s;
}

int TamREC(char *cad,int i){
	int s=0;
	if(cad[i]=='\0')
		return s;
	
	return (++s)+TamREC(cad,i+1);
	
}
int main(){
	char vector[]="holocausa";
	int i=0;
	char *cad;
	cad=&vector[0];
	cout<<cad<<endl;
	
	cout<<TamITE(vector);
	cout<<"\n"<<TamREC(vector,i);
	return 0;
}
