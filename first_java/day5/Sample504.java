package day5;

public class Sample504 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		int a[][] = new int[3][4];
		int m,n;

		for(m = 0; m < a.length; m++) {
			for(n = 0; n < a[m].length;n++) {
				a[m][n] = m + n;
			}
		}

		for(m = 0; m < a.length; m++) {
			for(n = 0; n < a[m].length; n++) {
				System.out.print(a[m][n] + " ");
			}
			System.out.println();
		}

	}

}
