# cc-code
int main()
{
	int a = 0;
	int b = 2;
	if (a == 0)//如果条件不满足则第一个if都不进，只有满足条件才会进去
		if (b == 9)
			printf("hehe\n");
		else
			printf("haha\n");//什么都不打印，else和最近的if相匹配
	return 0;
}
