#include"Relation.h"

void Relation(Circle center, Point point)
{
	int distance =
		(center.getCenter().getX() - point.getX()) * (center.getCenter().getX() - point.getX())
		+ (center.getCenter().getY() - point.getY()) * (center.getCenter().getY() - point.getY());
	int r = (center.getR()) * (center.getR());
	if (r == distance)
	{
		cout << "点在圆上" << endl;
	}
	else if (r < distance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}