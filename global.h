#pragma once
#include <QtCore>
#include <QString>


namespace cpi {

#if QT_VERSION < 0x060000
const auto SkipEmptyParts = QString::SkipEmptyParts;

#else
const auto SkipEmptyParts = Qt::SkipEmptyParts;
const auto flush = Qt::flush;
const auto endl = Qt::endl;
#endif

}
