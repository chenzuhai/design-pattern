#include<iostream>
#include"Observer.h"
#include"QQGroup.h"
#include"Subject.h"
#include"RoomMate.h"
int main()
{
	RoomMate* B = new RoomMate("B",
		"sleeping",
		"get dressed and run to classroom");
	RoomMate* C = new RoomMate("C",
		"playing games",
		"pay the fee and run to classroom");
	RoomMate* D = new RoomMate("D",
		"shopping with girl friend",
		"go back to school and be worried about girl friend's angry");
	QQGroup *qqgroup = new QQGroup();
	qqgroup->registerObserver(B);
	qqgroup->registerObserver(C);
	qqgroup->registerObserver(D);

	qqgroup->notifyObserver("没点名");

	qqgroup->notifyObserver("点名了");

	system("Pause");
	return 0;
	
}