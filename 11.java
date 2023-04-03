public class Main {

	static final String ANSI_GREEN = "\u001B[32m";
	static final String ANSI_WHITE = "\u001B[0m";

	public static void main(String[] args) {
		
		System.out.print(ANSI_GREEN + "\n4 * (-1)^k + 1\n    ----------  =\n      2k - 1"
				+ "\n4 * (");
		
		int k, power, divisor;
		double dividend, total = 0;
		for (k = 1; k <= 1000000; k++) {
		    power = k + 1;
		    dividend = Math.pow(-1, power);
		    divisor = (2 * k) - 1;
		    total += 4 * (dividend / divisor);

		    if (k > 1 && k < 1000000) {
		    	System.out.println(" + " + (int)dividend + " / " + divisor);
		    }
		    else if (k == 1000000) {
		    	System.out.print(" + " + (int)dividend + " / " + divisor);
		    }
		    else {
		        System.out.println(" -1 / " + divisor);
		    }
		}
		System.out.printf(") = %.2f", total);
		System.out.println(ANSI_WHITE + "\n\n\n\n\n");
	}

}
