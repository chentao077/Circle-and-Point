#include"circle.h"
#include"point.h"
#include"Relation.h"

int main()
{
	//��ʼ��Բ��
	Circle c1;
	c1.setR(5);
	Point center;
	center.setX(5);
	center.setY(5);
	c1.setCenter(center);
	//��ʼ����
	Point point;
	point.setX(5);
	point.setY(11);
	//�ж�λ��
	Relation(c1, point);
	return 0;
}

