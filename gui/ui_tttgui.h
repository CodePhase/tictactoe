/********************************************************************************
** Form generated from reading UI file 'tttgui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TTTGUI_H
#define TTTGUI_H

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

class Ui_tictactoe
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

    void setupUi(QWidget *tictactoe)
    {
        if (tictactoe->objectName().isEmpty())
            tictactoe->setObjectName(QString::fromUtf8("tictactoe"));
        tictactoe->resize(428, 449);
        line = new QFrame(tictactoe);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(160, 120, 20, 241));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        line->setFont(font);
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::VLine);
        line_2 = new QFrame(tictactoe);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(230, 120, 20, 241));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(tictactoe);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(100, 190, 211, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(tictactoe);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(100, 270, 211, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        btnTL = new QPushButton(tictactoe);
        btnTL->setObjectName(QString::fromUtf8("btnTL"));
        btnTL->setGeometry(QRect(100, 120, 71, 81));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        btnTL->setFont(font1);
        btnTL->setFocusPolicy(Qt::ClickFocus);
        btnTL->setFlat(true);
        btnTC = new QPushButton(tictactoe);
        btnTC->setObjectName(QString::fromUtf8("btnTC"));
        btnTC->setGeometry(QRect(170, 120, 71, 81));
        btnTC->setFont(font1);
        btnTC->setFocusPolicy(Qt::ClickFocus);
        btnTC->setFlat(true);
        btnTR = new QPushButton(tictactoe);
        btnTR->setObjectName(QString::fromUtf8("btnTR"));
        btnTR->setGeometry(QRect(240, 120, 71, 81));
        btnTR->setFont(font1);
        btnTR->setFocusPolicy(Qt::ClickFocus);
        btnTR->setFlat(true);
        btnMR = new QPushButton(tictactoe);
        btnMR->setObjectName(QString::fromUtf8("btnMR"));
        btnMR->setGeometry(QRect(240, 200, 71, 81));
        btnMR->setFont(font1);
        btnMR->setFocusPolicy(Qt::ClickFocus);
        btnMR->setFlat(true);
        btnMC = new QPushButton(tictactoe);
        btnMC->setObjectName(QString::fromUtf8("btnMC"));
        btnMC->setGeometry(QRect(170, 200, 71, 81));
        btnMC->setFont(font1);
        btnMC->setFocusPolicy(Qt::ClickFocus);
        btnMC->setFlat(true);
        btnML = new QPushButton(tictactoe);
        btnML->setObjectName(QString::fromUtf8("btnML"));
        btnML->setGeometry(QRect(100, 200, 71, 81));
        btnML->setFont(font1);
        btnML->setFocusPolicy(Qt::ClickFocus);
        btnML->setFlat(true);
        btnBL = new QPushButton(tictactoe);
        btnBL->setObjectName(QString::fromUtf8("btnBL"));
        btnBL->setGeometry(QRect(100, 280, 71, 81));
        btnBL->setFont(font1);
        btnBL->setFocusPolicy(Qt::ClickFocus);
        btnBL->setFlat(true);
        btnBC = new QPushButton(tictactoe);
        btnBC->setObjectName(QString::fromUtf8("btnBC"));
        btnBC->setGeometry(QRect(170, 280, 71, 81));
        btnBC->setFont(font1);
        btnBC->setFocusPolicy(Qt::ClickFocus);
        btnBC->setFlat(true);
        btnBR = new QPushButton(tictactoe);
        btnBR->setObjectName(QString::fromUtf8("btnBR"));
        btnBR->setGeometry(QRect(240, 280, 71, 81));
        btnBR->setFont(font1);
        btnBR->setFocusPolicy(Qt::ClickFocus);
        btnBR->setFlat(true);
        btnNew = new QPushButton(tictactoe);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));
        btnNew->setGeometry(QRect(160, 390, 90, 31));
        btnNew->setFocusPolicy(Qt::ClickFocus);
        lblMessages = new QLabel(tictactoe);
        lblMessages->setObjectName(QString::fromUtf8("lblMessages"));
        lblMessages->setGeometry(QRect(70, 70, 271, 31));
        lblMessages->setFrameShape(QFrame::Box);
        lblMessages->setLineWidth(1);
        lblMessages->setAlignment(Qt::AlignCenter);

        retranslateUi(tictactoe);

        QMetaObject::connectSlotsByName(tictactoe);
    } // setupUi

    void retranslateUi(QWidget *tictactoe)
    {
        tictactoe->setWindowTitle(QApplication::translate("tictactoe", "Tic Tac Toe C++ Test", 0, QApplication::UnicodeUTF8));
        btnTL->setText(QString());
        btnTC->setText(QString());
        btnTR->setText(QString());
        btnMR->setText(QString());
        btnMC->setText(QString());
        btnML->setText(QString());
        btnBL->setText(QString());
        btnBC->setText(QString());
        btnBR->setText(QString());
        btnNew->setText(QApplication::translate("tictactoe", "New Game", 0, QApplication::UnicodeUTF8));
        lblMessages->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tictactoe: public Ui_tictactoe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TTTGUI_H
