import java.util.Scanner;


	class SeqSearch {
		int seqSearch(int []a, int n, int key) {
			for(int i=0;i<n;i++) {
				if(a[i] == key)
					return i;
			}
			return -1;
		}

	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		SeqSearch sq = new SeqSearch();
	
		Scanner sc = new Scanner(System.in);
		System.out.println("��� �� : ");
		int num = sc.nextInt();
		int []x = new int[num];
		
		for(int i=0;i<num;i++) {
			System.out.println("x[" + i +"] : ");
			x[i] = sc.nextInt();
		}
		System.out.println("�˻��� �� : ");
		int key = sc.nextInt();
		int index = sq.seqSearch(x, num, key);
		
		if(index == -1) {
			System.out.println("�� ���� ��Ұ� �����ϴ�.");
		}
		else {
			System.out.println("key�� x["+index+"]�� �ֽ��ϴ�.");
		}
	}
}
