import java.util.Scanner;

public class IceCream {

    static int i, k, n, Left, Right, m[];


    static boolean Check(int Value)
    {
        int i, stall = 1, len = 0;
        for (i = 1; i < n; i++)
        {
            len += m[i] - m[i - 1];
            if (len >= Value) {len = 0; stall++;}
        }
        return stall >= k;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        m = new int[10001];
        n=sc.nextInt();
        k=sc.nextInt();
        for (i = 0; i < n; i++)
            m[i]=sc.nextInt();

        
        Left = 0; Right = 1000000000;
        while (Left <= Right)
        {
            int Middle = (Left + Right) / 2;
            if ((boolean) Check(Middle))
                Left = Middle + 1;
            else Right = Middle - 1;
        }
        System.out.println(Left-1);

    }
}