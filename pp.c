Question :: Accept a number N as the input. The program must print the X pattern as shown in the example Input.Output Section as the output.(Note Space should be replace with asterisk)

Boundary Conditon(s):
2<=N<=50

Input Format:
The first line contains the value of N


Example Input/Output 1:

Input:
4


Output:

1*****1
*2***2*
**3*3**
***4***
**3*3**
*2***2*
1*****1



Example Input/Output 1:

Input:
7

1***********1
*2*********2*
**3*******3**
***4*****4***
****5***5****
*****6*6*****
******7******
*****6*6*****
****5***5****
***4*****4***
**3*******3**
*2*********2*
1***********1




Program:



#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{

	int n;
	scanf("%d",&n);
	char _[] = "***********************************************************************************************************";
	int t = strlen(_),z=n-2,j=0;
	for(int i=1;i<n*2;i++)
	{
		if(i<n)
		{
			printf("%s%d%s%d%s\n",_+(t-i+1),i,_+(t-(n*2-i*2)+1),i,_+(t-i+1));
		}
		else if(i==n)
		{
			printf("%s%d%s\n",_+(t-i+1),i,_+(t-i+1));
		}
		else
		{
			printf("%s%d%s%d%s\n",_+(t-z),n-j-1,_+(t-(j*2)-1),n-j-1,_+(t-z));
			--z;++j;
		}
	}
}
