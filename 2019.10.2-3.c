/*
��ɲ�������Ϸ
import java.util.Random;
import java.util.Scanner;
class Test{
public static void main(String[] args){
Random random=new Random();
Scanner sc=new Scanner(System.in);
int toGuess=random.nextInt(100);
while(true){
System.out.println("������1-100֮������֣�");
int num=sc.nextInt();
if(num<toGuess){
System.out.println("��С��");
}else if(num>toGuess){
System.out.println("�´���");
}else{
System.out.println("�¶���");
break;
}
}
sc.close();
}

}
*/

/* ��д����ģ��������������ĳ����� ����������������룬������ȷ��
��ʾ����¼�ɹ���,������� �����������룬����������Ρ����ξ�������ʾ�˳�����
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.println("���������룺");
for(int i=0;i<3;i++){
String password=sc.next();
if(password.equals("123")){
System.out.println("������ȷ");
break;
}else{
System.out.printf("�������,������%d�λ���%n",2-i);
}
if(2-i==0){
System.out.println("�����˳�");
}
}
sc.close();
}

}
*/

