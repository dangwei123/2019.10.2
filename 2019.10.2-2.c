/*
��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��
class Test{
public static void main(String[] args){
int count=0;
for(int i=1;i<=100;i++){
if(i%10==9){
count++;
}else if(i/10==9){
count++;
}
}
System.out.println(count);
}
}
*/

/*
���0��999֮������С�ˮ�ɻ������������(��ˮ�ɻ�������ָһ����λ�������λ���ֵ�
������ȷ�õ��ڸ��������磻153��1��5��3?����153��һ����ˮ�ɻ�������)
class Test{
public static void main(String[] args){
int i=0;
int tmp=0;
for(i=0;i<1000;i++){
int count=0;
int sum=0;
tmp=i;
while(tmp!=0){
count++;
tmp/=10;
}
tmp=i;
while(tmp!=0){
sum+=(int)Math.pow((double)(tmp%10),(double)count);
tmp/=10;
}
if(sum==i){
System.out.println(i);
}
}
}
}
*/

/*
дһ���������ز����������� 1 �ĸ��� ���磺 15 0000 1111 4 �� 1
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int num=sc.nextInt();
int count=0;
while(num!=0){
count++;
num&=(num-1);
}
System.out.println(count);
}
}

*/

/*
��ȡһ�������������������е�ż��λ������λ�� �ֱ��������������
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int num=sc.nextInt();
int i=0;
System.out.printf("ż���У�");
for(i=31;i>=0;i-=2){
System.out.printf("%d ",(num>>i)&1);
}
System.out.println();
System.out.printf("�����У�");
for(i=30;i>=0;i-=2){
System.out.printf("%d ",(num>>i)&1);
}
System.out.println();
}
}
*/
/*
���һ��������ÿһλ.
import java.util.Scanner;
class Test{
public static void main(String[] args){
print(1234);
}
public static void print(int n){
if(n>9){
print(n/10);
}
System.out.printf("%d ",n%10);
}
}
*/