#include "PhoneSearchBest.h"
#include <iostream>

int main()
{
	// ��ȡ PhoneSearchBest ��ʵ��
	PhoneSearchBest* search = PhoneSearchBest::GetInstance();
	// ִ�в�ѯ

	std::string phoneNumber = "1765811xxxx";
	std::string result = search->Query(phoneNumber);

	// ������
	std::cout << result << std::endl;
	//ɽ��|��̨|264000|0535|370600|��ͨ


	return 0;
}
