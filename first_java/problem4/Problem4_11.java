package problem4;

public class Problem4_11 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		int max_ = 0;
		for(int i=1;i <= 5;i++) {
			int num = (int)(Math.random()*100)+1;
			System.out.println(num);
			if(num >= max_) {
				max_ = num;
			}
		}
		System.out.println("最大値:"+max_);
	}
}
