/*================================================================
 * Copyright (C) 2019 by fuujiro. All rights reserved.
 *
 * Filename: hailstone.cpp
 * Contributor: fuujiro
 * Date: 01/20/2019
 * Description:
*
================================================================*/

#include <iostream>
using namespace std;

int hailstone(int n) {
    int length = 1;
    while(1 < n) {(n % 2) ? n = 3 * n + 1 : n /= 2; ++length;}
    return length;
}

int main()
{
    int n;
    cin >> n;
    cout << "The length is " << hailstone(n) << endl;
    return 0;
}
