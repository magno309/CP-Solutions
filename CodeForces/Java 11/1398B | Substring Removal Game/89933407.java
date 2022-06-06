import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            boolean flag = true;
            int c=0;
            StringBuilder s = new StringBuilder(sc.next());
            for (int k = 0; k < s.length(); k++) {
                int mayor = 0, ini = 0, fin = 0;
                for (int i = 0; i < s.length(); i++) {
                    if (s.charAt(i) == '1') {
                        int j = i;
                        while (j < s.length()) {
                            if (s.charAt(j) == '1') {
                                j++;
                            } else {
                                break;
                            }
                        }
                        if (j - i > mayor) {
                            mayor = j - i;
                            ini = i;
                            fin = j;
                        }
                    }
                }
                if(flag){
                    c+=mayor;
                    flag = false;
                }else{
                    flag = true;
                }
                s.delete(ini, fin);
            }
            System.out.println(c);
        }
    }
}