package problem5;

public class Problem5_7 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		int a[] = new int [5];
		for(int i = 0; i < a.length; i++) {
			int num = (int)(Math.random()*10) + 1;
			System.out.print(num + " ");
			a[i] = num;
		}
		System.out.println();
		System.out.println();

		int sum = 0,avg;
		for(int i = 0; i < a.length; i++) {
			sum += a[i];
		}
		avg = sum / a.length;

		System.out.println("合計値:" + sum);
		System.out.println("平均値:" + avg);

		System.out.println();

		String low_avg = "";
		String high_avg = "";

		for(int i = 0;i < a.length; i++) {
			if(a[i] < avg) {
				low_avg += a[i];
				low_avg += " ";
			} else if(a[i] > avg) {
				high_avg += a[i];
				high_avg += " ";
			}
		}
		System.out.println("平均値よりも大きい数:" + high_avg);
		System.out.println("平均値よりも小さい数:"+ low_avg);


	}

}
