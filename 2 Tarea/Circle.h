#pragma once

#include <string>

class Circle
{
public:
	Circle();
	Circle(double r);
	Circle(double r, std::string c);
	double GetRadius();
	std::string GetColor();
	double Circle::GetArea();
	void SetRadius(double r);
	void SetColor(std::string c);
	void GetColor(std::string c);

	

private:
	double _radius;
	std::string _color;
};
