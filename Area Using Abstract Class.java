import java.util.*;
abstract class figure{
    int l;
    int b;
    abstract int area();
}
class rectangle extends figure{
    rectangle(int a,int b1){
        l=a;
        b=b1;
    }
    int area(){
        return l*b;
    }
}
class triangle extends figure{
     triangle(){
        l=5;
        b=10;
    }
    int area(){
        return l*b;
    }
}
public class Main
{
	public static void main(String[] args) {
		triangle t=new triangle();
		System.out.println(t.area()/2);
		rectangle r=new rectangle(5,10);
		System.out.println(r.area());
	}
}
