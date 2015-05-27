#include <QtQuick>
#include <sailfishapp.h>
#include "countriesfiltermodel.h"

int main(int argc, char *argv[])
{
    qmlRegisterType<CountriesFilterModel>("test.app", 1, 0, "CountriesModel");
    return SailfishApp::main(argc, argv);
}

