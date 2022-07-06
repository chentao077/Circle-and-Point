#pragma once
#include<iostream>
#include"point.h"
using namespace std;

class Circle
{
public:
	int getR();
	
	Point getCenter();
	
	void setR(int r);
	
	void setCenter(Point center);
	
private:
	int m_r;
	Point m_center;
};
