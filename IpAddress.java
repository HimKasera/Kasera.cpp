import java.net.InetAddress;
import java.net.UnknownHostException;

public class IpAddress {
   public static void main(String[] args) {
      try {
         InetAddress my_address = InetAddress.getLocalHost();
         System.out.println("The IP address is : " + my_address.getHostAddress());
      } catch (UnknownHostException e) {
         System.out.println("Couldn't find the local address.");
      }
   }
}