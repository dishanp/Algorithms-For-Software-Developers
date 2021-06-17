import java.lang.*;
public class Main
{
	public static void main(String[] args) {
		String str1="Rishi Raj";
		String str2="Sameer Rana";
		int i=str1.indexOf(" ");
		int j=str2.indexOf(" ");
	    String str3=str1.substring(0,i)+str2.substring(j);
	    String str4=str2.substring(0,j)+str1.substring(i);
	    System.out.println(str3);
	    System.out.println(str4);
	}
}

