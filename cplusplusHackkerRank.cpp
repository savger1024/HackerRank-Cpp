#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//24.01.07.
int Day2Task2(int a, int b, int c, int d) {
    if (a > b && a > c && a > d) return a;
    if (b > a && b > c && b > d) return b;
    if (c > b && c > a && c > d) return c;
    if (d > b && d > c && d > a) return d;
    else return 0;
}

void Day2Task1(int min, int max) {
    for (int i = min; i <= max; i++) {
    if (i == 1) cout << "one\n";
    else if (i == 2) cout << "two\n";
    else if (i == 3) cout << "three\n";
    else if (i == 4) cout << "four\n";
    else if (i == 5) cout << "five\n";
    else if (i == 6) cout << "six\n";
    else if (i == 7) cout << "seven\n";
    else if (i == 8) cout << "eight\n";
    else if (i == 9) cout << "nine\n";
    else if (i > 9 && i % 2 == 1) cout << "odd\n";
    else if (i > 9 && i % 2 == 0) cout << "even\n";
    }
}

//24.01.06.
void Day1Task3(int n) {
    //start of my task
    if (n == 1) cout << "one";
    else if (n == 2) cout << "two";
    else if (n == 3) cout << "three";
    else if (n == 4) cout << "four";
    else if (n == 5) cout << "five";
    else if (n == 6) cout << "six";
    else if (n == 7) cout << "seven";
    else if (n == 8) cout << "eight";
    else if (n == 9) cout << "nine";
    else if (n > 9) cout << "Greater than 9";
    //end of my task
}
//help for Day1Task3
string ltrim(const string &str) {
    string s(str);
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );
    return s;
}

void Day1Task2() {
    int in;
    long lon;
    char ch;
    float fl;
    double d;
    scanf("%d %ld %c %f %lf", &in, &lon, &ch, &fl, &d);
    printf("%d\n%ld\n%c\n%f\n%lf", in, lon, ch, fl, d);
}

void Day1Task1() {
    //Enter first, second, third number.
    int a, b, c;
    cin >> a >> b >> c;
    //Add first, decond and third number.
    cout << a + b + c;
}

int main() {
    cout << "hi\n";

    //24.01.07.
    cout << Day2Task2(18, 23, 62, 55) << '\n';
    Day2Task1(7, 15);

    //24.01.06.
    //Day1Task3
    string n_temp;
    getline(cin, n_temp);
    cout << "OK until stoi";
    int n = stoi(ltrim(rtrim(n_temp)));
    Day1Task3(n);
    //Day1Task1-2
    Day1Task2();
    Day1Task1();

    int end;
    cin >> end;
    return 0;
}