import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt(), uc = 0;
            char tmp[] = sc.next().toCharArray();
            List<Character> s = new ArrayList<>();
            for(int i=0;i<n;i++){
                s.add(tmp[i]);
                if(tmp[i] == '0' && i > uc){
                    uc = i;
                }
            }
            int i = 0;
            while(i<uc-1){
                if(s.get(i).equals('1') && s.get(i+1).equals('0')){
                    s.remove(i+1);
                    uc--;
                }else{
                    i++;
                }
            }
            while(uc>0){
                if(s.get(uc-1).equals('1')){
                    s.remove(uc-1);
                    uc--;
                }
                else if(s.get(uc-1).equals('0')){
                    break;
                }
            }
            for (Character item : s) {
                System.out.print(item);
            }
            System.out.println("");
        }
    }
}