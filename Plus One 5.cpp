//1:
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]==9){
              digits[i]=0;
                }
                else{
                    digits[i]++;
                    return digits;
                }
            }
        digits[0]=1;
        digits.push_back(0);
        return digits;
    }
};

//2:
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = n - 1; i >= 0; --i) {
        
        arr[i]++;
        
        
        if (arr[i] < 10) {
            for (int j = 0; j < n; ++j) {
                cout << arr[j] << " ";
            }
            cout << endl;
            return 0;
        }
        
        
        arr[i] = 0;
    }
    
    cout << "1 ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
        
