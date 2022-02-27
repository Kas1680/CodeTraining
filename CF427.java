import java.util.Scanner;

public class main {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        // int[] arr = new int[n];
        int untreated = 0;
        int recruit = 0;
        int check = 0;

        for(int i = 0; i < n; i++){
            check = scan.nextInt();

            if(check < 0 && recruit == 0){
                untreated++;
            }
            else if(check < 0 && recruit > 0){
                recruit--;
            }
            else{
                recruit+= check;
            }
        }
        System.out.println(untreated);
    }
}
