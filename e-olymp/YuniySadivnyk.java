import java.util.Scanner;

public class YuniySadivnyk {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n, c = 1, l = 2;
        n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            c += l;
            l += 2;
        }
        System.out.println(c);
    }
}