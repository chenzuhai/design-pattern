#pragma once
#include <iostream>
using std::string;
class ISchoolReport
{
public:
	ISchoolReport(void)
	{
	}
	virtual ~ISchoolReport(void)
	{
	}
	virtual void Report() = 0;
	virtual void Sign(string name) = 0;
};

//FouthGradeSchoolReport.h

#pragma once
#include "ischoolreport.h"
class CFouthGradeSchoolReport :
	public ISchoolReport
{
public:
	CFouthGradeSchoolReport(void);
	~CFouthGradeSchoolReport(void);
	void Report();
	void Sign(string name);
};