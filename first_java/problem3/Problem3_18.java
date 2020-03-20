package problem3;

public class Problem3_18 {

	public static void main(String[] args) {
		int tmp = (int)(Math.random()*45)+1 - 10;
		System.out.println("摂氏"+tmp+"度");
		if(tmp >= 30) {
			System.out.println("真夏日です。");
		} else if (tmp < 30 && tmp >= 25) {
			System.out.println("夏日です。");
		} else if (tmp < 0) {
			System.out.println("真冬日です。");
		}

	}
}
