int main() {
    int T;
    cin >> T;
   
    int enter[T], leave[T];
   
    for (int i = 0; i < T; ++i) {
        cin >> enter[i];
    }
   
    for (int i = 0; i < T; ++i) {
        cin >> leave[i];
    }
   
    int current_students = 0;
    int max_students = 0;
   
    for (int i = 0; i < T; ++i) {
        current_students += enter[i];
        current_students -= leave[i];
       
        if (current_students > max_students) {
            max_students = current_students;
        }
    }
   
    cout << max_students << endl;
   
    return 0;
}
