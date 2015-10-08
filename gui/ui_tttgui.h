/********************************************************************************
** Form generated from reading UI file 'tttgui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTTGUI_H
#define UI_TTTGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlgTttgui
{
public:
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *btnTL;
    QPushButton *btnTC;
    QPushButton *btnTR;
    QPushButton *btnMR;
    QPushButton *btnMC;
    QPushButton *btnML;
    QPushButton *btnBL;
    QPushButton *btnBC;
    QPushButton *btnBR;
    QPushButton *btnNew;
    QLabel *lblMessages;

    void setupUi(QWidget *dlgTttgui)
    {
        if (dlgTttgui->objectName().isEmpty())
            dlgTttgui->setObjectName(QString::fromUtf8("dlgTttgui"));
        dlgTttgui->resize(428, 449);
        line = new QFrame(dlgTttgui);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(160, 120, 20, 241));
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::VLine);
        line_2 = new QFrame(dlgTttgui);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(230, 120, 20, 241));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(dlgTttgui);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(100, 190, 211, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(dlgTttgui);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(100, 270, 211, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        btnTL = new QPushButton(dlgTttgui);
        btnTL->setObjectName(QString::fromUtf8("btnTL"));
        btnTL->setGeometry(QRect(100, 120, 71, 81));
        btnTL->setFocusPolicy(Qt::ClickFocus);
        btnTL->setFlat(true);
        btnTC = new QPushButton(dlgTttgui);
        btnTC->setObjectName(QString::fromUtf8("btnTC"));
        btnTC->setGeometry(QRect(170, 120, 71, 81));
        btnTC->setFocusPolicy(Qt::ClickFocus);
        btnTC->setFlat(true);
        btnTR = new QPushButton(dlgTttgui);
        btnTR->setObjectName(QString::fromUtf8("btnTR"));
        btnTR->setGeometry(QRect(240, 120, 71, 81));
        btnTR->setFocusPolicy(Qt::ClickFocus);
        btnTR->setFlat(true);
        btnMR = new QPushButton(dlgTttgui);
        btnMR->setObjectName(QString::fromUtf8("btnMR"));
        btnMR->setGeometry(QRect(240, 200, 71, 81));
        btnMR->setFocusPolicy(Qt::ClickFocus);
        btnMR->setFlat(true);
        btnMC = new QPushButton(dlgTttgui);
        btnMC->setObjectName(QString::fromUtf8("btnMC"));
        btnMC->setGeometry(QRect(170, 200, 71, 81));
        btnMC->setFocusPolicy(Qt::ClickFocus);
        btnMC->setFlat(true);
        btnML = new QPushButton(dlgTttgui);
        btnML->setObjectName(QString::fromUtf8("btnML"));
        btnML->setGeometry(QRect(100, 200, 71, 81));
        btnML->setFocusPolicy(Qt::ClickFocus);
        btnML->setFlat(true);
        btnBL = new QPushButton(dlgTttgui);
        btnBL->setObjectName(QString::fromUtf8("btnBL"));
        btnBL->setGeometry(QRect(100, 280, 71, 81));
        btnBL->setFocusPolicy(Qt::ClickFocus);
        btnBL->setFlat(true);
        btnBC = new QPushButton(dlgTttgui);
        btnBC->setObjectName(QString::fromUtf8("btnBC"));
        btnBC->setGeometry(QRect(170, 280, 71, 81));
        btnBC->setFocusPolicy(Qt::ClickFocus);
        btnBC->setFlat(true);
        btnBR = new QPushButton(dlgTttgui);
        btnBR->setObjectName(QString::fromUtf8("btnBR"));
        btnBR->setGeometry(QRect(240, 280, 71, 81));
        btnBR->setFocusPolicy(Qt::ClickFocus);
        btnBR->setFlat(true);
        btnNew = new QPushButton(dlgTttgui);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));
        btnNew->setGeometry(QRect(160, 390, 90, 31));
	btnNew->setFocusPolicy(Qt::ClickFocus);
        lblMessages = new QLabel(dlgTttgui);
        lblMessages->setObjectName(QString::fromUtf8("lblMessages"));
        lblMessages->setGeometry(QRect(70, 70, 271, 31));
        lblMessages->setFrameShape(QFrame::Box);
        lblMessages->setLineWidth(1);
        lblMessages->setAlignment(Qt::AlignCenter);

        retranslateUi(dlgTttgui);

        QMetaObject::connectSlotsByName(dlgTttgui);
    } // setupUi

    void retranslateUi(QWidget *dlgTttgui)
    {
        dlgTttgui->setWindowTitle(QApplication::translate("dlgTttgui", "Tic Tac Toe C++ Test", 0, QApplication::UnicodeUTF8));
        btnTL->setText(QString());
        btnTC->setText(QString());
        btnTR->setText(QString());
        btnMR->setText(QString());
        btnMC->setText(QString());
        btnML->setText(QString());
        btnBL->setText(QString());
        btnBC->setText(QString());
        btnBR->setText(QString());
        btnNew->setText(QApplication::translate("dlgTttgui", "New Game", 0, QApplication::UnicodeUTF8));
        lblMessages->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tictactoe : public Ui_dlgTttgui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTTGUI_H
