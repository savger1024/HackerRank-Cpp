#include <stdio.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Day4Task1() {
    int n;
    std::cin >> n;
    cout << n << '\n';
    int A[n];
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        A[i] = temp;
    }
    
    for (int i = n-1; i >= 0; i--) {
        cout << A[i];
    }
}

void update(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    if (*b > temp) *b = *b - temp;
    else *b = temp - *b;
}

int main() {
    cout << "hi";

    //24.01.09.
    Day4Task1();

    int a, b;
    int *pa = &a, *pb = &b;
    
    printf("Enter two numbers with spaces separated");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    int end;
    scanf("%d", &end);
    return 0;
}
