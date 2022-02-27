import java.util.Scanner;

public class MAIN
{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int count = 1;
        int [] arr = new int [n];
        int i = 0;

        while(i < n){
            arr[i] = scan.nextInt();
            i++;
        }


       int k = 0;
       int j = 1;
        while(j < n){
            if(arr[j] != arr[k]){
                count++;
            }
            k++; j++;
        }

        System.out.println(count);

    }
}
