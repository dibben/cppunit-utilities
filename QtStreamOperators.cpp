/***********************************************************
 *
 * Implementation file QtStreamOperators.cpp for Qt Utility functions
 * (c)Copyright 2015, David Dibben
 *
 **********************************************************/

#include "QtStreamOperators.h"
 
#include <QColor>
#include <QString>
#include <QPoint>
#include <QStringList>


std::ostream& operator<<(std::ostream& s, const QColor& color)
{
	s << color.name().toLatin1().constData();
	return s;
}

std::ostream& operator<<(std::ostream& s, const QString& str)
{
	s << (const char*)str.toLocal8Bit();
	return s;
}

std::ostream& operator<<(std::ostream& s, QString& str)
{
	s << (const char*)str.toLocal8Bit();
	return s;
}

std::ostream& operator<<(std::ostream& s, const QPoint& p)
{
	s<<"("<<p.x()<<","<<p.y()<<")";
	return s;
}

std::ostream& operator<<(std::ostream& s, const QStringList& list)
{
	int size = list.count();
	for (int i = 0; i < size; i++) {
		s << list[i] << std::endl;
	}
	return s;
}
