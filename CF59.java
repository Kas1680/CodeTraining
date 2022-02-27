
import java.util.Scanner;


public class main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.next();
        int count = 0;

        for (char c : input.toCharArray()) {
            if (Character.isUpperCase(c)) {
                count++;
            }
        }

        if(count > input.length()/2){ // More upper than lower
            System.out.println(input.toUpperCase());
        }
        else{
            System.out.println(input.toLowerCase());
        }
    }
}