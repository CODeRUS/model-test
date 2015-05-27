#include "countriesfiltermodel.h"

CountriesFilterModel::CountriesFilterModel(QObject *parent) :
    QSortFilterProxyModel(parent)
{
    model = new TestModel(this);

    setFilterCaseSensitivity(Qt::CaseInsensitive);
    setFilterRole(Qt::DisplayRole);

    setSourceModel(model);
}

QString CountriesFilterModel::filter() const
{
    return filterRegExp().pattern();
}

void CountriesFilterModel::setFilter(const QString &filter)
{
    setFilterFixedString(filter);

    Q_EMIT filterChanged();
}
