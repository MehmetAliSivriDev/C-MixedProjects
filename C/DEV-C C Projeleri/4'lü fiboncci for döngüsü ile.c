
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	//Bu Program 4'lü fibonacci örneðidir.

	int a,b,c,d,e,i;

	a=1;
	b=1;
	c=1;
	d=1;

	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);


	for(i=1;i<20;i++)
	{
		e=a+b+c+d;
	    a=b;
	    b=c;
	    c=d;
	    d=e;
		printf("%d\n",e);
	}

	return 0;
}
