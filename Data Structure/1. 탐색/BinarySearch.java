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
		
		System.out.println("��� ���� : ");
		int num = sc.nextInt();
		int []x = new int[num];
		int key;
		for(int i=0;i<num;i++) {
			System.out.println("��Ҹ� �Է� : ");
			x[i] = sc.nextInt();
		}
		Arrays.sort(x);
		System.out.println("�˻��� �� : ");
		key = sc.nextInt();
		int index = binarySearch(x,num,key);
		
		if(index == -1) {
			System.out.println("ã�� ���� ��Ұ� �����ϴ�.");
		}
		else
			System.out.println("key�� x["+ index +"] �� �ֽ��ϴ�.");
	}

}
