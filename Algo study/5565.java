import java.util.Scanner;

public class _5565{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        
        int money = sc.nextInt();
        int score;
        int sum = 0;
        int res = 0;
        for(int i=0; i<9 ;i++){
            score = sc.nextInt();
            sum+=score;
        }
        res = money - sum;
        System.out.println(res);
    }
}