import java.util.Scanner;

public class _2953 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[5];
        
        int person = 1;
        int max = 0;
        for(int i=0;i<arr.length;i++){
            int sum = 0;
            int one = sc.nextInt();
            int two = sc.nextInt();
            int three = sc.nextInt();
            int four = sc.nextInt();
            sum = one + two + three + four;

            arr[i] =  sum;
            if(max < sum){
                person = i+1;
            }
            max = Math.max(max,sum);
        }
        System.out.println(person + " " + max);

    }
}
