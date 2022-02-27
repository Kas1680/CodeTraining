import java.util.Scanner;

public class main {
    public static void main(String [] args){
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        String input = scan.next();


        int count = 0;
        for(int i = 0, k = i+1; k < n; k++, i++){
            if(input.charAt(i) == input.charAt(k)){
                count++;
            }
        }
        System.out.println(count);
    }
}
