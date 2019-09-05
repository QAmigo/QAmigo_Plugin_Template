#include "qamigotabplugintemplate.h"

QAmigoTabPluginTemplate::QAmigoTabPluginTemplate() :
    layout(new QHBoxLayout())
{
}

QLayout *QAmigoTabPluginTemplate::getLayout()
{
    return layout;
}

QString QAmigoTabPluginTemplate::getName() const
{
    return tr("Template");
}

void QAmigoTabPluginTemplate::onFrameUpdated(int id, QList<double> listValues)
{
    Q_UNUSED(id);
    Q_UNUSED(listValues);
}

void QAmigoTabPluginTemplate::setConnection(QIODevice *connection)
{
    this->connection = connection;
}
