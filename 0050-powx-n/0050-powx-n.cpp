class Solution {
public:
    double myPow(double x, long long n) {
        if (n == 0){
            return 1;
        }
        if (n == 1){
            return x;
        }
        if (n < 0){
            return 1 / myPow(x , -n);
        }
        double result = 1.0;
        double half = myPow(x,n/2);
        if (n % 2 == 0){
            result = half * half;  
        }
        if (n % 2 != 0){
            result = half * half * x;
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna