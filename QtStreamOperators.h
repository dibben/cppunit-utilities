/***********************************************************
 *
 * Header file QtStreamOperators.h for Qt Utility functions
 * (c)Copyright 2015, David Dibben
 *
 **********************************************************/
 
#ifndef QT_STREAM_OPERATORS_H
#define QT_STREAM_OPERATORS_H
 
#include <iostream>

class QColor;
class QString; 
class QPoint;
class QStringList;

std::ostream& operator<<(std::ostream& s, const QColor& color);
std::ostream& operator<<(std::ostream& s, QString& str);
std::ostream& operator<<(std::ostream& s, const QString& str);
std::ostream& operator<<(std::ostream& s, const QPoint& p);
std::ostream& operator<<(std::ostream& s, const QStringList& list);

#endif
