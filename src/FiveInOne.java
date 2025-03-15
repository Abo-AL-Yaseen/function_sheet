import java.util.Scanner;
import java.util.Vector;

public class FiveInOne {
    static int maximum(Vector<Integer> v) {
        int maxi = -1000000;
        for (int i = 0; i < v.size(); i++) {
            if (maxi < v.get(i)) {
                maxi = v.get(i);
            }
        }
        return maxi;
    }

    static int minimum(Vector<Integer> v) {
        int mini = 1000000;
        for (int i = 0; i < v.size(); i++) {
            if (mini > v.get(i)) {
                mini = v.get(i);
            }
        }
        return mini;
    }

    static int primeNumber(Vector<Integer> v) {
        int result = 0;
        for (int i = 0; i < v.size(); i++) {
            int n = v.get(i);
            if (isPrime(n)) {
                result++;
            }
        }
        return result;
    }

    static boolean isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    static boolean isPalindrom(int num) {
        int x = 0, value = num;
        while (num > 0) {
            x = x * 10 + num % 10;
            num /= 10;
        }
        return value == x;
    }

    static int palindrom(Vector<Integer> v) {
        int count = 0;
        for (int i = 0; i < v.size(); i++) {
            if (isPalindrom(v.get(i))) {
                count++;
            }
        }
        return count;
    }

    static int maximumNDiv(Vector<Integer> v) {
        int maxDivisors = 0;
        int numberWithMaxDivisors = 0;

        for (int i = 0; i < v.size(); i++) {
            int num = v.get(i);
            int divisors = countDivisors(num);

            if (divisors > maxDivisors || (divisors == maxDivisors && num > numberWithMaxDivisors)) {
                maxDivisors = divisors;
                numberWithMaxDivisors = num;
            }
        }
        return numberWithMaxDivisors;
    }

    static int countDivisors(int num) {
        int count = 0;
        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                count++;
                if (i != num / i) count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Vector<Integer> v = new Vector<>(n);
        for (int i = 0; i < n; i++) {
            v.add(sc.nextInt());
        }
        sc.close();

        System.out.println("The maximum number : " + maximum(v));
        System.out.println("The minimum number : " + minimum(v));
        System.out.println("The number of prime numbers : " + primeNumber(v));
        System.out.println("The number of palindrome numbers : " + palindrom(v));
        System.out.println("The number that has the maximum number of divisors : " + maximumNDiv(v));
    }
}
