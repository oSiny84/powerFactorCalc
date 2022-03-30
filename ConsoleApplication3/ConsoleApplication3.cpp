// ConsoleApplication3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <math.h>

float get_q(float p, float pf)
{
	float var;

	var = ( p * sqrt(1-pf*pf) ) / pf;
	return var;
}

int _tmain(int argc, _TCHAR* argv[])
{
	float var = 0;
	bool b = true;
	float pf;
	while(b)
	{
		printf("Please write pf value :",var);
		scanf_s("%f",&pf);

		if(pf == 0)
			b = false;
		else
		{
			var = get_q(100,pf);
			printf("Q value is %f \r\n",var);
		}
	}
	return 0;
}

