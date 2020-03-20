package problem4;

public class Problem4_17 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		String box = "";
		for (int i = 1;i<=10;i++) {
			for(int j = 1;j<=10;j++) {
				if (i >= j) {
					box += "■ ";
				} else {
					box += "□ ";
				}

			}
			System.out.println(box);
			box = "";
		}
	}
}
