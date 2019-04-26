#include <iostream>

std::string echo(int length, char** chars) {
	std::string ret = "";
	// Skip the first argc index because its the program
	for(int i = 1; i < length; i++) {
		ret += chars[i];
		// Print a whitespace after all but the last iteration
		if (i < length - 1)
			ret +=  " ";
	}
	ret += "\n";
	return ret;
}
