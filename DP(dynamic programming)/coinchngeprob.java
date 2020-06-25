public class WaysToCoinChange {
	public static int dynamic(int[] v, int amount) {
		int[][] solution = new int[v.length + 1][amount + 1];
		for (int i = 0; i <= v.length; i++) {
			solution[i][0] = 1;
		}
		for (int i = 1; i <= amount; i++) {
			solution[0][i] = 0;
		}
		for (int i = 1; i <= v.length; i++) {
			for (int j = 1; j <= amount; j++) {
				if (v[i - 1] <= j) {
					solution[i][j] = solution[i - 1][j]
							+ solution[i][j - v[i - 1]];
				} else {
					solution[i][j] = solution[i - 1][j];
				}
			}
		}
		return solution[v.length][amount];
	}

	public static void main(String[] args) {
		int amount = 5;
		int[] v = { 1, 2, 3 };
		System.out.println("By Dynamic Programming " + dynamic(v, amount));
	}

}