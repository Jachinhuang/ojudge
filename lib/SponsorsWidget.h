/*********************************************************************
* Copyright (C) 2020 Miguel Revilla Rodríguez
*                    and the OJudge Platform project contributors
*
* This file is part of the OJudge Platform
*
* Read the LICENSE file for information on license terms
*********************************************************************/

#ifndef SPONSORSWIDGET_H
#define SPONSORSWIDGET_H

#include <Wt/WContainerWidget.h>
#include <Wt/Auth/Login.h>

class SponsorsWidget : public Wt::WContainerWidget {
public:
SponsorsWidget();
void login(Wt::Auth::Login& login);
void logout();

};

#endif // SPONSORSWIDGET_H
