import java.util.*;
public class _2010 {
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int num=0;
        int res=0;
        for(int i=0;i<n;i++){
            num = sc.nextInt();
            res += num;
        }   
        System.out.println(res-(n-1));
        sc.close();
    }
}
