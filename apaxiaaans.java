import java.util.Scanner;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class apaxiaaans {
    public static void main (String[] args) {
        String name = new Scanner (System.in).next ();
        System.out.println (name.replaceAll ("(.)\\1+", "$1"));
    }
}
