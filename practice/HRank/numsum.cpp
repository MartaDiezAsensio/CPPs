#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int nums[3];
    int sum;

	std::cin >> nums[0] >> nums[1] >> nums[2];
	sum = nums[0] + nums[1] + nums[2];
    
	std::cout << sum; 
    
    return 0;
}