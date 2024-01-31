#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int i;
	int	*arr;

    std::cin >> n;
	arr = new int[n];
    for (i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
	while (--i >= 0){
		std::cout << arr[i] << " ";
	}
    return 0;
}