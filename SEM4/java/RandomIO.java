

import java.io.*;
import java.util.*;

public class RandomIO {

    public static void main(String[] args) {
        // TODO code application logic here
        RandomAccessFile file = null;
        InputStreamReader r = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(r);
        Scanner sc = new Scanner(System.in);
        Employees[] obj = new Employees[5];
        String n;
        String g;
        int eid;
        String ph;
        try {

            file = new RandomAccessFile("ran31.txt", "rw");
            for (int i = 0; i < 5; i++) {
                System.out.println("Input the Name of Employee " + (i + 1) + ": ");
                n = br.readLine();
                System.out.println("Input the Gender of Employee " + (i + 1) + " (M/F): ");
                g = br.readLine();
                System.out.println("Input the ID of Employee " + (i + 1) + ": ");
                eid = sc.nextInt();
                System.out.println("Input the Phone Number of Employee " + (i + 1) + ": ");
                ph = br.readLine();
                Employees E = new Employees(n, g, eid, ph);
                obj[i] = E;
                file.writeChars(obj[i].name);
                file.writeChars(obj[i].gender);
                file.writeInt(eid);
                file.writeChars(obj[i].phn);

            }
            file.seek(0);
            for (int j = 0; j < 5; j++) {
                System.out.print("Name of Employee " + (j + 1) + " is : ");
                for (int i = 0; i < obj[j].name.length(); i++) {
                    System.out.print("" + file.readChar());
                }
                System.out.println();
                System.out.print("Gender of Employee " + (j + 1) + " is : ");
                System.out.println(file.readChar());
                System.out.print("ID of Employee " + (j + 1) + " is  : ");
                System.out.println(file.readInt());
                System.out.print("Phone Number of Employee " + (j + 1) + " is : ");
                for (int i = 0; i < obj[j].phn.length(); i++) {
                    System.out.print("" + file.readChar());
                }
                System.out.println();

            }

        } catch (IOException e) {
            System.out.println(e);
        }
    }

}

class Employees {

    int empid;
    String name;
    String gender;
    String phn;

    public Employees(String n, String g, int eid, String ph) {
        name = n;
        gender = g;
        empid = eid;
        phn = ph;
    }

}
