import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

class BinarySearch {
	
	static int binarySearch(int[] a, int n, int key) {
		int left = 0;
		int right = n-1;
		
		do {
			int center = (left + right) / 2;
			if(a[center] == key) {
				return center;
			}
			else if(a[center] < key) {
				left = center + 1;
			}
			else
				right = center -1;
		}while(left<=right);
		return -1;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		System.out.println("요소 개수 : ");
		int num = sc.nextInt();
		int []x = new int[num];
		int key;
		for(int i=0;i<num;i++) {
			System.out.println("요소를 입력 : ");
			x[i] = sc.nextInt();
		}
		Arrays.sort(x);
		System.out.println("검색할 값 : ");
		key = sc.nextInt();
		int index = binarySearch(x,num,key);
		
		if(index == -1) {
			System.out.println("찾는 값의 요소가 없습니다.");
		}
		else
			System.out.println("key는 x["+ index +"] 에 있습니다.");
	}

}
