#include<stdio.h>
int findk(int a[],int b[],int al,int ar,int bl,int br,int k)
{
	int am=(al+ar)/2;
	int bm=(bl+br)/2;
	if (al>ar) return b[bl+k-1];
	if (bl>br) return a[al+k-1];
	if (a[am]>=b[bm]){
		if (k<=(am-al)+(bm-bl)+1)
		return findk(a,b,al,ar,bl,bm-1,k);//��b��ǰһ���a���� 
		else 
		return findk(a,b,am+1,ar,bl,br,k-(am-al)-1);
	}
	else{
		if (k<=(am-al)+(bm-bl)+1)
		return findk(a,b,al, am-1, bl, br, k);
		else
		return findk(a,b,al, ar, bm+1, br, k-(bm-bl)-1);
	}
	return -1;
}  


main()
{
	int a[]={10,9,7,5,1};
	int b[]={11,8,6,4,2};
	int k;
	int result;
	printf("����k��ֵ:");
	scanf("%d",&k);
	result=findk(a,b,0,4,0,4,k);
	printf("��%d������ǣ�%d",k,result);
}





















