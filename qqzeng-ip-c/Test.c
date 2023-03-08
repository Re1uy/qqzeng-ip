#include "IpSearch2Fast.h"
#include <locale.h>
#include <time.h>
int main(int argc, char** argv)
{
	IpSearch2Fast* ipSearch = getInstance();
	if (!ipSearch)
	{
		printf("the IPSearch instance is null!");
		return -1;
	}
	
	char* ip = "58.213.198.68";
	char* local = geoip_query(ipSearch, ip);
	setlocale(LC_ALL, "zh_CN.UTF-8"); // ������������Ϊ����
	printf("%s\n", local);
	//����|�й�|����|�Ͼ�|�ػ�|����|320104|China|CN|118.79815|32.01112

	system("pause");
	return 0;
}