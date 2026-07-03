#include <bits/stdc++.h>
using namespace std;

int arr[6][6] = {
    {1, 2, 3, 4, 5, 6},
    {20, 21, 22, 23, 24, 7},
    {19, 32, 33, 34, 25, 8},
    {18, 31, 36, 35, 26, 9},
    {17, 30, 29, 28, 27, 10},
    {16, 15, 14, 13, 12, 11}
};

int main() {

    int top = 0;
    int bottom = 5;
    int left = 0;
    int right = 5;

    while (top <= bottom && left <= right) {

        // Left → Right
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;

        // Top → Bottom
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

        // Right → Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // Bottom → Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}