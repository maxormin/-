import java.util.*;
public class Main {
    public static void main(String[] args) {
    	Scanner in = new Scanner(System.in);
    	HashMap<String,Integer> list = new HashMap<>();
    	int a,i,max;
    	String color,id=null;
    	while(true){
    		a = in.nextInt();
    		if(a==0)
    			break;
    		max = 0;
    		for(i=0;i<a;i++){
	    		color = in.next();
	    		if(list.containsKey(color))
	    			list.put(color, list.get(color)+1);
	    		else
	    			list.put(color, 1);
	    		if(max<list.get(color)){
    				max = list.get(color);
    				id = String.valueOf(color);
    			}
    		}
    		System.out.println(id);
    	}
    }
}