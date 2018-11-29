import java.io.*;

public class Rost {
    public static void main(String[] args)  throws IOException {

        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int cnt,n,a,b;
        int mas[];
        String s[];
        while(read.ready()) {

            cnt = 0;
            n = Integer.parseInt(read.readLine());

            mas = new int[n];

            s = read.readLine().split(" ");



            for(int i = 0; i < n; i++)

                mas[i] = Integer.parseInt(s[i]);



            s = read.readLine().split(" ");

            a = Integer.parseInt(s[0]);
            b = Integer.parseInt(s[1]);

            for(int i = 0; i < n; i++)
                if ((mas[i] >= a) && (mas[i] <= b)) cnt++;

            System.out.println(cnt);

        }

    }

}