package problem5;

public class Problem5_1 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		int a[] = new int [7];
		for(int i = 0; i < a.length; i++) {
			int num = (int)(Math.random()*10) + 1;
			a[i] = num;
		}
		
		for(int i = 0; i < a.length; i++) {
			System.out.print("a[" + i + "]=" + a[i] + " ");
		}

	}

}
