/*******************************************************************************
* This file is part of PlexyDesk.
*  Maintained by : Siraj Razick <siraj@kde.org>
*  Authored By  :
*
*  PlexyDesk is free software: you can redistribute it and/or modify
*  it under the terms of the GNU Lesser General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  PlexyDesk is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU Lesser General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with PlexyDesk. If not, see <http://www.gnu.org/licenses/lgpl.html>
*******************************************************************************/
#ifndef PLEXY_CPU_I
#define PLEXY_CPU_I

#include <QtCore>
#include <plexy.h>
#include <widgetinterface.h>
#include "cpu.h"
#include "cpuwidget.h"

class CpuInterface : public PlexyDesk::WidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(PlexyDesk::AbstractPluginInterface)

public :
        CpuInterface(QObject *object = 0) {
    }
    PlexyDesk::BasePlugin *instance() {
        return new Cpu(this);
    }
};

Q_EXPORT_PLUGIN2(CpuInterface, CpuInterface)
#endif
