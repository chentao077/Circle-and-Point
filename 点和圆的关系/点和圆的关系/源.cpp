#include"circle.h"
#include"point.h"
#include"Relation.h"

int main()
{
	//初始化圆类
	Circle c1;
	c1.setR(5);
	Point center;
	center.setX(5);
	center.setY(5);
	c1.setCenter(center);
	//初始化点
	Point point;
	point.setX(5);
	point.setY(11);
	//判断位置
	Relation(c1, point);
	return 0;
}

