#include<stdio.h>
int main()
{
	int year1,year2,month1,month2,day1,day2,total;int 
	yeardifference,leap,a,b,c,d,e,f,i=0;
	printf("欢迎来到人体生物节律\n""让我来为你检测你的身体状况\n");
	printf("请输入您的出生时间   如2001 01 01""注: 必须是公历时间！！\n");
	scanf("%d%d%d",&year2,&month2,&day2);
	printf("请输入您的测定时间 \n");
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
	b=b+day1;                                     //计算1月1日至测定天数 
	
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
    c=c+day2;                           //计算1月1日至生日天数 
    
	yeardifference=(year1-year2)*365;   //计算（测定年-出生年）*365 
	for(i=0;year1>=year2;year1--)
	{
	if(year1%400==0||year1%100!=0&&year1%4==0)	 leap=1;
	else leap=0;
	if(leap) i=i+1;
	}
	a=i;	                            //闰年数 
	total=yeardifference+a+b-c;         //经历总天数 
	d=total%23;e=total%28;f=total%33;
	
	if(d==0) printf("体力处在周期日  思维活跃，但分辨能力差，身心起伏不定，盲目易动\n");
	if(d<12&&d!=0) printf("体力处在高潮日第%d天    能量释放阶段，各方面良好\n",d); 
	if(d==12) printf("体力处在临界期    抵抗力差，情绪不稳，丢三落四\n");
	if(d>12)
	{
	d=d-12; 
	printf("体力处在低潮期第%d天   能量蓄积补充阶段\n",d);              //判断体力节律的情况 
	}
 
	
	if(e==0) printf("情绪处在周期日  思维活跃，但分辨能力差，身心起伏不定，盲目易动\n");
	if(e<14&&e!=0) printf("情绪处在高潮日第%d天   能量释放阶段，各方面良好\n",e);
	if(e==14) printf("情绪处在临界期   抵抗力差，情绪不稳，丢三落四\n");
	if(e>14)
	{
	e=e-14;
    printf("情绪处在低潮期第%d天  能量蓄积补充阶段\n",e);                 //判断情绪节律的情况 
	}
	
  
	if(f==0) printf("智力处在周期日  思维活跃，但分辨能力差，身心起伏不定，盲目易动\n");
	if(f<17&&f!=0) printf("智力处在高潮期第%d天  能量释放阶段，各方面良好\n",f);
	if(f==17) printf("智力处在临界期  抵抗力差，情绪不稳，丢三落四\n");
	if(f>17)
	{
	f=f-17;
	printf("智力处在低潮期第%d天  能量蓄积补充阶段\n",f);                  //判断智力节律的情况 
	
	
	}
	if(d==12&&e==14||d==12&&f==17||e==14&&f==17||d==12&&e==14&&f==17)
	printf("你处在危险期！！！  请谨慎安排自己的生活");                     //判断危险期 
    return 0; 
} 
