#ifndef TESTMODEL_H
#define TESTMODEL_H

#include <QAbstractListModel>
#include <QHash>

class TestModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit TestModel(QObject *parent = 0);

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    QHash<int, QByteArray> roleNames() const { return _roles; }

private:
    QStringList countries;
    QHash<int, QByteArray> _roles;

signals:

public slots:

};

#endif // TESTMODEL_H
