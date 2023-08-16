#include <iostream>
#include <vector>
char buffer[50];
using namespace std;
int j=-1;
int k=0;
int i=0;
vector <string> splitted_message;
vector <int> decoded_place;
vector <char> decoded_char;
string convertToString(char* a);
int decoded_place_number_1,decoded_place_number_2;
vector <char> final_decoded_message(40);
char final_message[40];
int main() {
char message[]="T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24";	
fill(final_decoded_message.begin(),final_decoded_message.end(),0);
for (i=0;i<40;i++)
{
	for (j=j+1;j<200;j++)
    {
		buffer[k]=message[j];
	    k++;
	    	if (message[j]==' ')
	    	{	 
	    		break;
	    	}		
	}	
		splitted_message.push_back(convertToString(buffer));
		memset(buffer,0,20);           // clearing the buffer
		k=0;
}
	for (int k=0;k<40;k++)
	{
	  	decoded_char.push_back(splitted_message[k].c_str()[0]); 
	  	decoded_place_number_1=splitted_message[k].c_str()[1]-48; // the ascii code of numbers starts from 48 so zero is 48 one is 49 etc
	  	decoded_place_number_2=splitted_message[k].c_str()[2]-48;
	  	if (decoded_place_number_2==-16)  // because the ascii code of blank character is 32 
	  	{
      		decoded_place.push_back(decoded_place_number_1);
      	}
        else 
	  	{
	  		decoded_place.push_back((10*decoded_place_number_1)+decoded_place_number_2);
      	}
	}
    for (int i=0;i<40;i++)
    {
       	final_message[decoded_place[i]]=decoded_char[i];
	}
	printf("final message is \n");
	for (int i=0;i<40;i++)
	{
	    printf("%c",final_message[i]);
	}	
return 0;
}
string convertToString(char* a)
{
	string s = a;
	return s;
}