import java.util.*;
class Staff{
  String codename;
  void Staff(String a){
    codename = a;
  }
}
class Teacher extends Staff{
  String type = "Teacher";
  int salary = 50000;
  int num_sub = 10;
}
class Typist extends Staff{
  int min_typspeed = 60;
  String major_type = "Typist";
}
class Officer extends Staff{
  String type = "Officer";
  int salary(int grade){
    int salary = grade * 15000;
    return salary;
  }
}
class RegularTypist extends Typist{
  String minor_type = "Regular";
  int salary = 50000;
}
class CasualTypist extends Typist{
  String minor_type = "Casual";
  int salary = 40000;
}
class DataBase{
  public static void main(String a[]){
    System.out.println("\n Enter the codename for the class you want to querry : ");
    Scanner sc = new Scanner(System.in);
    String code = sc.nextLine();
    Staff st = new Staff();
    st.Staff(code);
    String subcode = code.substring(0,2);
    if(subcode.equals("TE")){
      Teacher te = new Teacher(); 
      System.out.println("\n The codename was : " + st.codename + ", The type is : " + te.type + ", The type teaches :" + te.num_sub + " subjects a week \n" + " And has a salary of rs : " + te.salary);
    }
    else if (subcode.equals("OF")){
      Officer of = new Officer();
      System.out.println("\n Enter the grade of the officer( Must be in range 1 - 5) : ");
      int gr = sc.nextInt();
      System.out.println("\n The codename was : " + st.codename + ", The type is : " + of.type + ", The grade is :" + gr + "\n" + " And has a salary of rs : " + of.salary(gr));
    }
    else if (subcode.equals("RT") || subcode.equals("CT")){
      Typist ty = new Typist();
      if (subcode.equals("RT")){
        RegularTypist rty = new RegularTypist();
        System.out.println("\n The codename was : " + st.codename + ", The type is : " + rty.minor_type + " " + ty.major_type + ", The minimum typing speed is :" + ty.min_typspeed + "\n" + " And has a salary of rs : " + rty.salary);
      }	
      else if(subcode.equals("CT")){
        CasualTypist cty = new CasualTypist();
        System.out.println("\n The codename was : " + st.codename + ", The type is : " + cty.minor_type + " " + ty.major_type + ", The minimum typing speed is :" + ty.min_typspeed + "\n" + " And has a salary of rs : " + cty.salary);
      }	    
    }  
    else
      System.out.println("\n Sorry no such class available please check the code name and try again !");
  }
}
