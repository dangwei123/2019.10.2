/*
编写程序数一下 1到 100 的所有整数中出现多少个数字9。
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
求出0～999之间的所有“水仙花数”并输出。(“水仙花数”是指一个三位数，其各位数字的
立方和确好等于该数本身，如；153＝1＋5＋3?，则153是一个“水仙花数”。)
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
写一个函数返回参数二进制中 1 的个数 比如： 15 0000 1111 4 个 1
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
获取一个数二进制序列中所有的偶数位和奇数位， 分别输出二进制序列
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int num=sc.nextInt();
int i=0;
System.out.printf("偶数列：");
for(i=31;i>=0;i-=2){
System.out.printf("%d ",(num>>i)&1);
}
System.out.println();
System.out.printf("奇数列：");
for(i=30;i>=0;i-=2){
System.out.printf("%d ",(num>>i)&1);
}
System.out.println();
}
}
*/
/*
输出一个整数的每一位.
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