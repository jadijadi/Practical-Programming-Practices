//Author: TheyCallMeEzraieel(Mohammad)
#include <iostream>
#include <string>
#include <sstream>
#include <map>

int main() {
	std::string encoded = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"; //Stores encoded message
	std::string decoded; //The decoded message will store into this var
	std::map<std::string, char> dict{{"One", '1'}, {"Two", '2'}, {"Three", '3'}, {"Four", '4'}, {"Five", '5'}, {"Six", '6'}, {"Seven", '7'}, {"Eight", '8'}, {"Nine", '9'}, {"Zero", '0'}, {"Dash", '-'}}; //A simple dictionary for numbers and dash character
	std::istringstream ss(encoded); //Assign a stringstream of the encoded message
	std::string word; //Stores each words with shift right operator
	while(ss>>word){
		if (dict.find(word) != dict.end()){ //If the word exist in dict
			decoded += dict[word];
		} else { //If not
			decoded += word[0]; //Stores the first character of the word
		}
	}
	std::cout<<decoded; //And prints the decoded message
}
