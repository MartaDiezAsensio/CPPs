#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int i;
    int arr[4];
    int max;
    
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    
    i = 0;
    max = arr[i];
    while (i < 4)
    {
        if (max < arr[i])
            max = arr[i];
        i++;
    }
    return (max);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}