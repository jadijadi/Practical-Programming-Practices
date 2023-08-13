#include <iostream>
	#include <vector>
	#include <string.h>
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	char buffer[25];
	using namespace std;
	int j=-1;
	int k=0;
	int i=0;
	vector <string> splitted_message;
	char decoded_message[25];
	string convertToString(char* a);
	int main() {
		char message[]="Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven";
	
	for (i=0;i<26;i++)
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
			 memset(buffer,0,20);
			 k=0;
	}
	for (int i=0;i<26;i++)
	{
		printf("vector_string[%d] is %s\n",i,splitted_message[i].c_str());
	}
	for (int i=0;i<26;i++)
	{
		if (strstr(splitted_message[i].c_str(),"One"))
		{
		decoded_message[i]='1';
		}
		else if (strstr(splitted_message[i].c_str(),"Two"))
		{
		decoded_message[i]='2';
		}
		else if (strstr(splitted_message[i].c_str(),"Three"))
		{
		decoded_message[i]='3';
		}
		else if (strstr(splitted_message[i].c_str(),"Four"))
		{
		decoded_message[i]='4';
		}
			else if (strstr(splitted_message[i].c_str(),"Five"))
		{
		decoded_message[i]='5';
		}
			else if (strstr(splitted_message[i].c_str(),"Six"))
		{
		decoded_message[i]='5';
		}
		else if (strstr(splitted_message[i].c_str(),"Seven"))
		{
		decoded_message[i]='7';
		}
			else if (strstr(splitted_message[i].c_str(),"Eight"))
		{
		decoded_message[i]='7';
		}
			else if (strstr(splitted_message[i].c_str(),"Nine"))
		{
		decoded_message[i]='7';
		}
		else if (strstr(splitted_message[i].c_str(),"Zero"))
		{
		decoded_message[i]='0';
		}

		   else if (strstr(splitted_message[i].c_str(),"Dash"))
		   {
		   	decoded_message[i]='-';
		   }
		   else
		    { 
		    
		    decoded_message[i]=splitted_message[i].c_str()[0];
		    
			}	
	}
	printf("decoded message is %s",decoded_message);
	
		return 0;
	}
	string convertToString(char* a)
	{
	    string s = a;
	    return s;
	}