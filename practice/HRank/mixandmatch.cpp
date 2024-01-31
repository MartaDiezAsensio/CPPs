#include <iostream>
#include <cstdio>

int main() {
    // Complete the code.
    int a;
    int b;
    int i;
    
    std::cin >> a;
    std::cin >> b;

    for(i = a; i <= b; i++){
        if (i >= 1 && i <= 9){
            if (i == 1)
                printf("one\n");
            else if (i == 2)
                printf("two\n");
            else if (i == 3)
                printf("three\n");
            else if (i == 4)
                printf("four\n");
            else if (i == 5)
                printf("five\n");
            else if (i == 6)
                printf("six\n");
            else if (i == 7)
                printf("seven\n");
            else if (i == 8)
                printf("eight\n");
            else if (i == 9)
                printf("nine\n");       
        }
        else if (i > 9){
            if ((i % 2) == 0)
                std::cout << "even\n";
            else
                std::cout << "odd\n";   
        }
    }
    return 0;
}