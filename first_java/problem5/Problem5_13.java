package problem5;

public class Problem5_13 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		int box[][] = new int[3][3];

		for(int n = 0; n < box.length; n++) {
			for(int m = 0; m < box[n].length; m++) {
				int num = (int)(Math.random()*10);
				box[n][m] = num;
			}
		}

		int max_ = 0;
		int min_ = 10;
		for(int n = 0; n < box.length; n++) {
			for(int m = 0; m < box[n].length; m++) {
				System.out.print(box[n][m] + " ");
				if(box[n][m] < min_) {
					min_ = box[n][m];
				}
				if(box[n][m] > max_) {
					max_ = box[n][m];
				}
			}
			System.out.println();


		}
		System.out.println();
		System.out.println("最大値:"+max_);
		System.out.println("最小値:"+min_);

	}

}
