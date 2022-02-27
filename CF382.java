
import java.util.Scanner;

public class main {
    public static void main (String [] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int s = 0, d = 0, start = 0, end = n - 1, changeSide = 0;

        int[] arr = new int[n];

        for (int i = 0; i < arr.length; i++) {
            int k = scan.nextInt();
            arr[i] = k;
        }

        do {
            int MaxNum =  arr[start] > arr[end]? arr[start] : arr[end];
            if(changeSide == 0){
                s+= MaxNum;
                changeSide = 1;
            }else {
                d+= MaxNum;
                changeSide = 0;
            }

            if(MaxNum == arr[start]){
                start++;
            }
            else{
                end--;
            }
        } while(start != end && n != 1);


        if(start == end){
            if(changeSide == 0){
                s+= arr[end];
            }
            else{
                d+= arr[end];
            }
        }

        System.out.printf("%d %d", s, d);
    }
}
