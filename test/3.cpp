#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void quickSort(int a[],int low,int high)
{
	int i,j;
	int flag;
	i=low;
	j=high;
	flag=a[low];
	while (i<j){
		while(i<j&&a[j]>=flag)
			j--;
		if (i<j)
		{
			a[i]=a[j];i++;
		}
		while(i<j&&a[i]<flag)
			i++;
		if (i<j)
		{
			a[j]=a[i];j--;
		}
		a[i]=flag;
		quickSort(a,low,i-1);
		quickSort(a,i+1,high);	
	}
}

main(){
	int *a;
	int i=0;
	int j;
	a=(int *)malloc(20*sizeof(int));
	printf("������Ҫ���������\n");
	while(1){
		scanf("%d",&a[i++]);
		char c=getchar();
		if (c=='\n')
		break;
	}
	quickSort(a,0,i-1);
	printf("��������������Ϊ��\n");
	for (j=0;j<i;j++)
	{
		printf("%d ",a[j]);
	}
	free(a);
}






//(1)����Ԫ�ض���ͬʱ���Ƚϴ�����1+2+3+4+...+n-1=(n^2-n)/2
//(2)�����������������ʱ ��ѡȡ��һ��Ԫ��Ϊpivot
  //�����������ÿ�λ��ֹ��̲����������С��Ϊn/2��T(n)=2T(n/2)+��(n)��o(nlogn) 





