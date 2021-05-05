interface bank{
   int assign();
}
class HDFC implements bank{
    public int assign(){
        int rate=10;
        return rate;
    }
}
class ICICI implements bank{
    int rate;
    ICICI(int r){
        rate=r;
    }
    public int assign(){
        return rate;
    }
}
public class Main
{
	public static void main(String[] args) {
		bank h=new HDFC();
		System.out.println("HDFC Interest Rate: "+h.assign());
		bank i=new ICICI(5);
		System.out.println("ICICI Interest Rate: "+i.assign());
	}
}
