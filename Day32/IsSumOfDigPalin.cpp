class IsSDigPalin {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
          int newNum = 0;
        // Finding out the digit sum
        while (N) {
            newNum += N % 10;
            N /= 10;
        }
        int reversedNewNum = 0;
        N = newNum;
        // Reversing N and storing it in reversedNewNum
        while (N) {
            reversedNewNum = (reversedNewNum * 10) + (N % 10);
            N /= 10;
        }
        return reversedNewNum == newNum;

    }
};