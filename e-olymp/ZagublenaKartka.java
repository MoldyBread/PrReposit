import java.util.Scanner;

public class ZagublenaKartka {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(),a;
        Boolean[] krt= new Boolean[n];
        for (int i = 0; i < n-1; i++) {
            krt[sc.nextInt()-1]=true;
        }
        for (int i = 0; i < n; i++) {
            if(krt[i]==null)
                System.out.println(i+1);
        }
    }
}