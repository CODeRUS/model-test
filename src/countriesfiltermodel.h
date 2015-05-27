#ifndef COUNTRIESFILTERMODEL_H
#define COUNTRIESFILTERMODEL_H

#include <QSortFilterProxyModel>

#include "testmodel.h"

class CountriesFilterModel : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    explicit CountriesFilterModel(QObject *parent = 0);

    Q_PROPERTY(QString filter READ filter WRITE setFilter NOTIFY filterChanged)
    QString filter() const;
    void setFilter(const QString &filter);

private:
    TestModel *model;

signals:
    void filterChanged();

};

#endif // COUNTRIESFILTERMODEL_H
