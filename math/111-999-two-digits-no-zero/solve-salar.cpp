#include <iostream>
#include <vector>
using namespace std;
void make_all_3_digits (void);
void print_vector(vector<string>&vect);
int temp_three_digit;
vector <string> three_digit_numbers(900);
void get_variations_without_zero(vector<string>&vect);
void get_variations_without_3_same_digit(vector<string>&vect);
void get_variations_without_3_opposite_digit(vector<string>&vect);
int main() 
{
	make_all_3_digits();
	get_variations_without_zero(three_digit_numbers);
	get_variations_without_3_same_digit(three_digit_numbers);
	get_variations_without_3_opposite_digit(three_digit_numbers);
	print_vector(three_digit_numbers);
	printf("the total number variation with the requirement is %i",three_digit_numbers.size());
}
void make_all_3_digits (void)
{	
	fill(three_digit_numbers.begin(),three_digit_numbers.end(),0);
	for (int i=0;i<900;i++)
	{
		temp_three_digit=i+100;
		three_digit_numbers[i]=to_string(temp_three_digit);	
	}	
}

void print_vector(vector<string>&vect)
{
	for (int i=0;i<vect.size();i++)
	{
		printf("three_digit_numbers[%i] is %s\n",i,three_digit_numbers[i].c_str());
	}	
}
void get_variations_without_zero(vector<string>&vect)
{
	for (int i=0;i<vect.size();i++)
	{
		for (int j=0;j<3;j++)
		{			
 			if (three_digit_numbers[i].c_str()[j]==48) // 48 is the value of ascii number '0'
			{
            three_digit_numbers.erase(three_digit_numbers.begin()+i);
            i--; // because the size of vector just decremented by one we should do this to prevent jumping over a vector element
            break;
			}
				
		}
	}	
}
void get_variations_without_3_same_digit(vector<string>&vect)
{
	for (int i=0;i<vect.size();i++)
	{
	        char first_digit=three_digit_numbers[i].c_str()[0];
            char second_digit=three_digit_numbers[i].c_str()[1];
			char third_digit=three_digit_numbers[i].c_str()[2];      	
 		    if (first_digit==second_digit&&second_digit==third_digit)
			{
            three_digit_numbers.erase(three_digit_numbers.begin()+i);
            i--; // because the size of vector just decremented by one we should do this to prevent jumping over a vector element
			}
	}		
}
void get_variations_without_3_opposite_digit(vector<string>&vect)
{
	for (int i=0;i<vect.size();i++)
	{
	        char first_digit=three_digit_numbers[i].c_str()[0];
            char second_digit=three_digit_numbers[i].c_str()[1];
			char third_digit=three_digit_numbers[i].c_str()[2];      
 		    if (first_digit!=second_digit&&second_digit!=third_digit&&first_digit!=third_digit)
			{
            three_digit_numbers.erase(three_digit_numbers.begin()+i);
            i--; // because the size of vector just decremented by one we should do this to prevent jumping over a vector element
			}
	}		
}