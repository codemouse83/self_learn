package problem4;

public class Problem4_1 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		int num = (int)(Math.random()*10)+1;
		System.out.println("数:"+num);
		String word = "";
		for(int i = 1;i<=num;i++) {
			word += "■ ";
		}
		System.out.println(word);
	}

}
