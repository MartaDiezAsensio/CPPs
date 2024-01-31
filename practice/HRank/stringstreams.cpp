#include <stdio.h>
#include <iostream>
#include <sstream>
#include <vector>

std::vector<int> parseInts(std::string str) {
	// Complete this function
	std::vector<int>	ret;
	std::stringstream	ss(str);
	char				ch;
	int					num;

	while (ss >> num){
		ret.push_back(num);
		ss >> ch;
	}

	return (ret);
}

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    
    return 0;
}
