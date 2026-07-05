#include <bits/stdc++.h>
using namespace std;
/*void pascalTriangle(int n) {
    vector<vector<int>> triangle(n);
    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    for (const auto& row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}
int main() {
    int n = 5; 
    pascalTriangle(n);
    return 0;
}  */ //printing nth row of pascal triangle using nCr formula time complexity is O(n) and space complexity is O(1)

/*void nthRow(int n) {

    long long ans = 1;

    cout << ans << " ";

    for (int i = 1; i < n; i++) {

        ans = ans * (n - i);

        ans = ans / i;

        cout << ans << " ";

    }

}

int main() {

    int n;

    n = 5;

    nthRow(n);

    return 0;

}*/ //priting nth row elements of pascal triangle using nCr formula time complexity is O(n) and space complexity is O(1)
long long nCr(int n, int r) {
    long long ans = 1;
    r = min(r, n - r); // Take advantage of symmetry property

    for (int i = 0; i < r; i++) {
        ans = ans * (n - i);
        ans = ans / (i + 1);
    }

    return ans;
}

int main() {
    int row, col;
    row = 5;
    col = 3;

    cout << nCr(row - 1, col - 1);

    return 0;//printing nth row and rth column element of pascal triangle using nCr formula time complexity is O(r) and space complexity is O(1)
}