#ifndef QAMIGOTABPLUGINTEMPLATE_H
#define QAMIGOTABPLUGINTEMPLATE_H

#include "tabplugininterface.h"

#include <QHBoxLayout>

class QAmigoTabPluginTemplate : public TabPluginInterface
{
    Q_OBJECT
    //Some information here.
    Q_PLUGIN_METADATA(IID "org.UESTC.SongQiang.TabPluginInterface")
    Q_INTERFACES(TabPluginInterface)
public:
    QAmigoTabPluginTemplate();

    // TabPluginInterface interface
public:
    // Main program will use this to retrive the layout to create tab.
    QLayout *getLayout() override;
    // Return name to be shown on the tab.
    QString getName() const override;
    // This will be called whenever new frame of data is decoded.
    void onFrameUpdated(int id, QList<double> listValues) override;
    /*
     * This will be called on the beginning, store the connection
     * if we want to send something to the serial port or socket
     * connection.
     */
    void setConnection(QIODevice *connection) override;

private:
    /*
     * The main program will create a widget with this layout and
     * add the widget as a new tab.
     */
    QHBoxLayout *layout;
    QIODevice *connection;
};

#endif // QAMIGOTABPLUGINTEMPLATE_H
