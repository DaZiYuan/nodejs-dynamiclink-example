#pragma once
#include<string>

class sdk
{
public:
	sdk();
	~sdk();

	static __declspec(dllexport) std::string Test();
	//ɨ��
	static __declspec(dllexport) int Scan();
};
