
public class Main
{
	public static void main(String[] args) {
		try {
		    int a=0;
		    System.out.println(5/a);
		    int arr[]=new int[5];
		    System.out.println(arr[6]);
		} catch(ArithmeticException e) {
		    System.out.println(e);
		}
		catch(ArrayIndexOutOfBoundsException e) {
		    System.out.println(e);
		}
		catch(NullPointerException e) {
		    System.out.println(e);
		}
		finally{
		    System.out.println("Welcome To An Exception free Experience!");
		}
		System.out.println("Rest Of The Code !");
	}
}
