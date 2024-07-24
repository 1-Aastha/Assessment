//simplify this solution
int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int permutations(int r, int n) {
    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= (r - i);
    }
    return result;
}

int main() {
    int n, r;
    cin >> n >> r;

    if (n > r) {
        cout << "Cannot adjust " << n << " people on " << r << " seats" << endl;
    } else {
        cout << permutations(r, n) << endl;
    }

    return 0;
}
