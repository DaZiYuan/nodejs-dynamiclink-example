#pragma once
#include<string>

class sdk
{
public:
	sdk();
	~sdk();

	static __declspec(dllexport) std::string Test();
};