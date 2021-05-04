import java.util.*;
class CLI_Exception extends Exception
{
    public CLI_Exception(String s)
    {
        super(s);
    }
}
public class Main
{
	public static void main(String[] args) {
		int a[]=new int[50];
		int sum=0;
        for(int i=0;i<5;i++){
        a[i]=Integer.parseInt(args[i]);
        sum+=a[i]*a[i];
        }
        int i=0;
        while(a[i]!=0){
            i++;
        }
        try{
            if(i<4)
        throw new CLI_Exception("Even Arguement Detected!");
        else
        System.out.println("Sum Of Squares Of All Arguements: "+sum);
        }catch (CLI_Exception ex)
        {
            System.out.println("Caught");
            System.out.print(ex.getMessage());
        }

}  
}
