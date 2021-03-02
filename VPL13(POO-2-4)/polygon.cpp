/**
 * Todas as tarefas deste exercicio devem ser feitas sobre esse arquivo.
 * Os metodos e operacoes marcados com a tag "TODO" devem ser editados.
 */

#include <iostream>
#include "polygon.h"
#include <list>

std::ostream &operator<<(std::ostream &out, const Polygon &poly)
{
	for (const Point &p : poly.limits)
	{
		out << " " << p;
	}
	return out;
}

bool operator==(const Polygon &lhs, const Polygon &rhs)
{
	// TODO: implement this method.
	std::vector<Point> lpoints = lhs;
	std::vector<Point> rpoints = rhs;
	if(rpoints.size()< lpoints.size()) return lhs.contains(rpoints[0]);
	else if(lpoints.size()==1 < rpoints.size()) return rhs.contains(lpoints[0]);
	else if(lpoints.size()==1 && rpoints.size()==1) return rpoints[0].contains(lpoints[0]);
	else {
		for(int i=0;i<lpoints.size()-1;i++){
			if(!(lpoints[i].contains(rpoints[i])))return false;
		}
	} 
	return true;
}

bool Point::contains(const Point &p) const
{
	return p.x == this->x && p.y == this->y;
}

std::ostream &operator<<(std::ostream &out, const Point &p)
{
	out << "(" << p.x << ", " << p.y << ")";
	return out;
}

bool RightRectangle::contains(const Point &p) const
{
	// TODO: implement this method.
	int max_X = 0, max_Y=0, min_X = this->limits[0].x, min_Y = this->limits[0].y;
	for (const Point& pnt : this->limits)
	{
		if (pnt.x > max_X) max_X = pnt.x;
		else if (pnt.x < min_X) min_X = pnt.x;
		if (pnt.y > max_Y) max_Y = pnt.y;
		else if (pnt.y < min_Y) min_Y = pnt.y;
	}
	return (p.x > min_X && p.x < max_X && p.y > min_Y && p.y < max_Y);
}

// O construtor já ta pronto
// TODO: implement this method.
Point::Point(int xx, int yy) : x(xx), y(yy) {
	this->limits.push_back(*this);
}

RightRectangle::RightRectangle(int x0, int y0, int x1, int y1)
{
	// TODO: implement this method.
	// Padronizando os dois pontos para contornar o problema de items iguais com a ordem diferente;
	int xMin = std::min(x0,x1);
	int yMin = std::min(y0,y1);
	int xMax = std::max(x0,x1);
	int yMax = std::max(y0,y1);
	Point p1(xMin,yMin);
	Point p2(xMin, yMax);
	Point p3(xMax,yMax);
	Point p4(xMax, yMin);
	this->limits.push_back(p1);
	this->limits.push_back(p2);
	this->limits.push_back(p3);
	this->limits.push_back(p4);
}