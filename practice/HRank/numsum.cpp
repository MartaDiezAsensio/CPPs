#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int nums[3];
    int sum;
	int	i;

	i = 0;
	sum = 0;
	std::cin >> nums[0] >> nums[1] >> nums[2];

    while (i < 3) {
        sum += nums[i];
		i++;
    }

	//sum = nums[0] + nums[1] + nums[2];
    std::cout << sum; 
    
    return 0;
}