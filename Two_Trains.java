import java.util.*;
import java.lang.*;
import java.io.*;

class codechef {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t != 0) {
            int n = sc.nextInt();
            int sum = 0, diff = 0;
            int[] a = new int[n];
            int[] b = new int[n];
            for (int i = 1; i < n; i++) {
                a[i] = sc.nextInt();
                sum += a[i];
                b[i] = a[i];
                a[i] = sum;
            }
            for (int i = 0; i < n - 1; i++) {
                diff = a[i + 1] - b[i];
                if (diff > 0) {
                    b[i + 1] = b[i] + diff + b[i + 1];
                } else {
                    b[i + 1] = b[i] + b[i + 1];
                }
            }
            System.out.println(b[n - 1]);
            t--;
        }
    }
}
