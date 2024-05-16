//Author: TheyCallMeEzraieel(Mohammad)
#include <iostream>
#include <string>

int main() {
	std::string encoded = "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24"; //Assign the encoded message
	std::string elements[40]; //This array assigned to store the elements like: {"T4", "l16", "_36" and etc...}
	std::string decoded(40, ' '); //The decoded message will store in this string variable
	int index = 0; //Element's index
	for (char i : encoded) { //The Process to push words+index into the elements array through using .append()
		std::string s(1, i); //To append a word's character we should cast it to string
		if (i == ' ') {
			index += 1; //It will seek to the next character
		}
		else {
			elements[index].append(s); //And push the elements
		}
	}
	for (std::string i : elements){ //The Process to store the characters at right places
		int sIndex = 1; //String index for each elements (it starts with 1 because we want to grab the index of each characters so we dont need to work with 0)
		std::string decodeIndex; //The right place, i.g. T at 4, { at 6 and etc...
		for (char k : i){ //The Process to get character's right index
			if (sIndex < i.length()){
				std::string strI(1, i[sIndex]); //Again we have to cast it to string
				decodeIndex.append(strI); //And push it (we will cast it to int)
			}
			sIndex += 1; //And goes to next number (some indexes are 2 digits)
		}
		decoded[std::stoi(decodeIndex)] = i[0]; //There you go! Stores characters at the right place!
	}
	std::cout<<decoded; //Prints the decoded message :)
	return 0;
}
// Notice: It's not a optimized code.
