#include"circle.h"


int Circle:: getR()
{
	return m_r;
}
Point Circle:: getCenter()
{
	return m_center;
}
void Circle:: setR(int r)
{
	m_r = r;
}
void Circle:: setCenter(Point center)
{
	m_center = center;
}
