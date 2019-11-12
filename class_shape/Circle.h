#pragma once
#include "Shape.h"

const double PI = 3.141592653589793238463;

// ����� ����������
class Circle :
	public Shape
{
	float r; // ������

public:

	Circle();
	~Circle();
	void set_r(float r1); // ������� �������
	float get_r(); // ��������� �������
	float Area() override;
	float Perimeter() override;
	float Diameter();

};

