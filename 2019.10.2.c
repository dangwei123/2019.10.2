/*
public static void print(int n){
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
system.out.printf("%d*%d=%d\t",j,i,i*j);
}
system.out.printf("%n");
}
}

public static double mySum(int n){
if(n==0){
return 1;
}else{
return (double)1/jie(n)+mySum(n-1);
}
}
public static int jie(int n){
if(n==0){
return 1;
}else{
return n*jie(n-1);
}
}


public static double pi(int n){
double sum=0;
int i=1;
while(i<=n){
sum+=1.0/i;
i+=2;
i*=(-1);
}
return sum;
}
*/
/*
��������, ����ӡ����ǰ�������������(����18), ����(19-28), ����(29-55), ����(56����)
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int age=sc.nextInt();
if(age<=18){
System.out.println("����");
}else if(age>=19&&age<=28){
System.out.println("����");
}else if(age>=29&&age<=55){
System.out.println("����");
}else{
System.out.println("����");
}
sc.close();
}

}*/

/*�ж�һ�������Ƿ�������
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int num=sc.nextInt();
int j=0;
for( j=2;j<num;j++){
if(num%j==0){
break;
}
}
if(num==j){
System.out.println("������");
}else{
System.out.println("��������");
}
}
sc.close();
}

}

}
*/

/*
��ӡ 1 - 100 ֮�����е�����
import java.util.Scanner;
class Test{
public static void main(String[] args){
int j=0;
int i=0;
for(i=2;i<=100;i++){
for( j=2;j<i;j++){
if(i%j==0){
break;
}
}
if(i==j){
System.out.println(i);
}
}

}
}
*/

/*
��� 1000 - 2000 ֮�����е�����
class Test{
public static void main(String[] args){
for(int year=1000;year<=2000;year++){
if(year%400==0||(year%4==0&&year%100!=0)){
System.out.println(year);
}
}

}
}
*/

/*
����˷��ھ���
class Test{
public static void main(String[] args){
for(int i=1;i<=9;i++){
for(int j=1;j<=i;j++){
System.out.printf("%d*%d=%d\t",j,i,i*j);
}
System.out.println();
}
}
}
*/

/*
�����������������Լ��
class Test{
public static void main(String[] args){
int a=48;
int b=36;
int i=0;
for( i=b;i>0;i--){
if(a%i==0&&b%i==0){
break;
}
}
System.out.println(i);
}
}
*/

/*
����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
class Test{
public static void main(String[] args){
double sum=0.0;
int i=0;
double a=1.0;
for(i=1;i<=100;i++){
sum+=a/i;
a*=(-1);
}
System.out.println(sum);
}
}
*/
