int main() {
    
    int N;
    cin >> N;

    int Arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> Arr[i];
    }

    int count = 0;
    int max_value = INT_MIN;

    for (int i = 0; i < N; ++i) {
        if (Arr[i] > max_value) {
            count++;
            max_value = Arr[i];
        }
    }

    cout << count << endl;

    return 0;
}

    
 
