package org.demo.A;

import java.util.Arrays;

public class merageArray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] a = { 1, 3 };
		int[] b = { 2, 4 };
		int[] c = new int[a.length + b.length];
		for (int i = 0; i < a.length; i++) {
			c[i] = a[i];
//			System.out.println(c[i]);
		}
		for (int i = 0; i < b.length; i += 1) {
			c[a.length + i] = b[i];
//			System.out.println(c[i]);
		}
		Arrays.sort(c);
		for (int i = 0; i < c.length; i++) {
			System.out.println(c[i]);
		}
		float median; 
		if (c.length % 2 == 0) {
			median = c[c.length / 2];
		} else {
			median = (c[(c.length - 1) / 2] + c[(c.length + 1) / 2]) / 2;
		}
		System.out.println(median);
	}

}
