//汉诺塔
void move(char c1, char c2)
{
	printf("%c>>%c\n", c1, c2);
}
void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		move(x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);
		move(x, z);
		hanoi(n - 1, y, x, z);
	}
}
int main()
{
	int n=0;
	printf("请输入N");
	scanf("%d", &n);
	hanoi(n, 'a', 'b', 'c');
}
//  主函数 定义一个整型n 进入hanni 把nabc 分别定义为整型和字符 if此时n为1 直接进入move
//  打印出此时x和z所在代表的字符 不为1进入else 再次进入Hanoi n-1 同时此时按照Hanoi的规则
//  我们将1到n-1层放于b 因为将其放到b需要从a>c>b 重新进入函数 if=1同上不等于1 进入else
//  再次同上 如此反复 直到n=1时 将这时此嵌套内x>z 打印出来 返回上一级嵌套 按此嵌套内x>Z
//  继续往下运行此时再次进入hanoi 因为之前的a>C>B 此时只要将b弄到c即可 所以b>a>c 也就是yxz
//  此时因为同级内的一个嵌套为1 所以此时该嵌套也=1 x>z 返回 整个程序运行完毕