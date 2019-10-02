/*
完成猜数字游戏
import java.util.Random;
import java.util.Scanner;
class Test{
public static void main(String[] args){
Random random=new Random();
Scanner sc=new Scanner(System.in);
int toGuess=random.nextInt(100);
while(true){
System.out.println("请输入1-100之间的数字：");
int num=sc.nextInt();
if(num<toGuess){
System.out.println("猜小了");
}else if(num>toGuess){
System.out.println("猜大了");
}else{
System.out.println("猜对了");
break;
}
}
sc.close();
}

}
*/

/* 编写代码模拟三次密码输入的场景。 最多能输入三次密码，密码正确，
提示“登录成功”,密码错误， 可以重新输入，最多输入三次。三次均错，则提示退出程序
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.println("请输入密码：");
for(int i=0;i<3;i++){
String password=sc.next();
if(password.equals("123")){
System.out.println("密码正确");
break;
}else{
System.out.printf("密码错误,您还有%d次机会%n",2-i);
}
if(2-i==0){
System.out.println("程序退出");
}
}
sc.close();
}

}
*/

