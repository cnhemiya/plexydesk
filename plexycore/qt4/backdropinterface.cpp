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
#include <backdropinterface.h>
#include <plexy.h>
#include <config.h>
#include <pluginloader.h>
#include <datainterface.h>

namespace PlexyDesk
{
    DataInterface *  BackdropInterface::loadData(const QString& name)
    {
     DataInterface * data = (DataInterface*)PluginLoader::getInstance()->instance(name);

              if (data) {
                  return data;
              } else {
                  qDebug()<<"Null data found"<<endl;
              }

              return 0;
    }

} // namespace PlexyDesk

