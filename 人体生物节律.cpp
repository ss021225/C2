#include<stdio.h>
int main()
{
	int year1,year2,month1,month2,day1,day2,total;int 
	yeardifference,leap,a,b,c,d,e,f,i=0;
	printf("��ӭ���������������\n""������Ϊ�����������״��\n");
	printf("���������ĳ���ʱ��   ��2001 01 01""ע: �����ǹ���ʱ�䣡��\n");
	scanf("%d%d%d",&year2,&month2,&day2);
	printf("���������Ĳⶨʱ�� \n");
    scanf("%d%d%d",&year1,&month1,&day1); 
    
   	if(year1%400==0||year1%100!=0&&year1%4==0)
	switch(month1)
	{	case 01:b=0;break;
		case 02:b=31;break;
		case 03:b=60;break;
		case 04:b=91;break;
		case 05:b=121;break;
		case 06:b=152;break;
		case 07:b=182;break;
	    case 8:b=213;break;
		case 9:b=244;break;
		case 10:b=274;break;
		case 11:b=305;break;
		case 12:b=335;break;
	}
	else
	switch(month1)
	{	case 01:b=0;break;
		case 02:b=31;break;
		case 03:b=59;break;
		case 04:b=90;break;
		case 05:b=120;break;
		case 06:b=151;break;
		case 07:b=181;break;
	    case 8:b=212;break;
		case 9:b=243;break;
		case 10:b=273;break;
		case 11:b=304;break;
		case 12:b=334;	break;
	}
	b=b+day1;                                     //����1��1�����ⶨ���� 
	
	if(year2%400==0||year2%100!=0&&year2%4==0)                  
	switch(month2)
	{
		case 01:c=0;break;
		case 02:c=31;break;
		case 03:c=60;break;
		case 04:c=91;break;
		case 05:c=121;break;
		case 06:c=152;break;
		case 07:c=182;break;
	    case 8:c=213;break;
		case 9:c=244;break;
		case 10:c=274;break;
		case 11:c=305;break;
		case 12:c=335;break;
	}
	else
    switch(month2)
	{	case 01:c=0;break;
		case 02:c=31;break;
		case 03:c=59;break;
		case 04:c=90;break;
		case 05:c=120;break;
		case 06:c=151;break;
		case 07:c=181;break;
	    case 8:c=212;break;
		case 9:c=243;break;
		case 10:c=273;break;
		case 11:c=304;break;
		case 12:c=334;	break;
	}
    c=c+day2;                           //����1��1������������ 
    
	yeardifference=(year1-year2)*365;   //���㣨�ⶨ��-�����꣩*365 
	for(i=0;year1>=year2;year1--)
	{
	if(year1%400==0||year1%100!=0&&year1%4==0)	 leap=1;
	else leap=0;
	if(leap) i=i+1;
	}
	a=i;	                            //������ 
	total=yeardifference+a+b-c;         //���������� 
	d=total%23;e=total%28;f=total%33;
	
	if(d==0) printf("��������������  ˼ά��Ծ�����ֱ�������������������äĿ�׶�\n");
	if(d<12&&d!=0) printf("�������ڸ߳��յ�%d��    �����ͷŽ׶Σ�����������\n",d); 
	if(d==12) printf("���������ٽ���    �ֿ�����������ȣ���������\n");
	if(d>12)
	{
	d=d-12; 
	printf("�������ڵͳ��ڵ�%d��   �����������׶�\n",d);              //�ж��������ɵ���� 
	}
 
	
	if(e==0) printf("��������������  ˼ά��Ծ�����ֱ�������������������äĿ�׶�\n");
	if(e<14&&e!=0) printf("�������ڸ߳��յ�%d��   �����ͷŽ׶Σ�����������\n",e);
	if(e==14) printf("���������ٽ���   �ֿ�����������ȣ���������\n");
	if(e>14)
	{
	e=e-14;
    printf("�������ڵͳ��ڵ�%d��  �����������׶�\n",e);                 //�ж��������ɵ���� 
	}
	
  
	if(f==0) printf("��������������  ˼ά��Ծ�����ֱ�������������������äĿ�׶�\n");
	if(f<17&&f!=0) printf("�������ڸ߳��ڵ�%d��  �����ͷŽ׶Σ�����������\n",f);
	if(f==17) printf("���������ٽ���  �ֿ�����������ȣ���������\n");
	if(f>17)
	{
	f=f-17;
	printf("�������ڵͳ��ڵ�%d��  �����������׶�\n",f);                  //�ж��������ɵ���� 
	
	
	}
	if(d==12&&e==14||d==12&&f==17||e==14&&f==17||d==12&&e==14&&f==17)
	printf("�㴦��Σ���ڣ�����  ����������Լ�������");                     //�ж�Σ���� 
    return 0; 
} 
