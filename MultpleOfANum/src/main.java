import java.util.Scanner;

public class main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        int multiples = scan.nextInt();
        String result = "1" + " ";
        long k = 1;
        for (int i = 1; i < n; i++) {
            k = k * multiples;
            result += k + " ";

        }
        System.out.println(result);
    }
}
