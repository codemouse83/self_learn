package problem4;

public class Problem4_14 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		String star= "";
		int num = (int)(Math.random()*10)+1;
		if (num % 2== 0) {
			for (int i=1; i<=num;i++) {
				star += "★";
			}
		} else {
			for (int i = 1;i<=num;i++) {
				star += "⭐︎";
			}

		}
		System.out.println(star);

	}

}
