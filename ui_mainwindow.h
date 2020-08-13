/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionKamishiro_Iyamoto;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QComboBox *comboBox;
    QLabel *label;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QMenu *menuInfo;
    QMenu *menuCreator;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/KaIya.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        actionKamishiro_Iyamoto = new QAction(MainWindow);
        actionKamishiro_Iyamoto->setObjectName(QString::fromUtf8("actionKamishiro_Iyamoto"));
        actionKamishiro_Iyamoto->setIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        comboBox_2->setFont(font);
        comboBox_2->setCursor(QCursor(Qt::SizeVerCursor));

        gridLayout->addWidget(comboBox_2, 1, 2, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton, 7, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(552, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 5, 2, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);
        comboBox->setCursor(QCursor(Qt::SizeVerCursor));

        gridLayout->addWidget(comboBox, 0, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_3 = new QComboBox(centralwidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setFont(font);
        comboBox_3->setCursor(QCursor(Qt::SizeVerCursor));

        gridLayout->addWidget(comboBox_3, 2, 2, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 4, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_5, 8, 0, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 9, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(552, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 2, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_4, 7, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_2, 8, 2, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_3, 9, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuInfo = new QMenu(menubar);
        menuInfo->setObjectName(QString::fromUtf8("menuInfo"));
        menuCreator = new QMenu(menuInfo);
        menuCreator->setObjectName(QString::fromUtf8("menuCreator"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuInfo->menuAction());
        menuInfo->addAction(menuCreator->menuAction());
        menuCreator->addAction(actionKamishiro_Iyamoto);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Daily planner", nullptr));
        actionKamishiro_Iyamoto->setText(QApplication::translate("MainWindow", "Kamishiro Iyamoto", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "\320\257\320\275\320\262\320\260\321\200\321\214", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "\320\244\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("MainWindow", "\320\234\320\260\321\200\321\202", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("MainWindow", "\320\220\320\277\321\200\320\265\320\273\321\214", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("MainWindow", "\320\234\320\260\320\271", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("MainWindow", "\320\230\321\216\320\275\321\214", nullptr));
        comboBox_2->setItemText(6, QApplication::translate("MainWindow", "\320\230\321\216\320\273\321\214", nullptr));
        comboBox_2->setItemText(7, QApplication::translate("MainWindow", "\320\220\320\262\320\263\321\203\321\201\321\202", nullptr));
        comboBox_2->setItemText(8, QApplication::translate("MainWindow", "\320\241\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        comboBox_2->setItemText(9, QApplication::translate("MainWindow", "\320\236\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        comboBox_2->setItemText(10, QApplication::translate("MainWindow", "\320\235\320\276\321\217\320\261\321\200\321\214", nullptr));
        comboBox_2->setItemText(11, QApplication::translate("MainWindow", "\320\224\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

        label_3->setText(QApplication::translate("MainWindow", "\320\223\320\276\320\264:", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "2", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "3", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "4", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "5", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "6", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "7", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "8", nullptr));
        comboBox->setItemText(8, QApplication::translate("MainWindow", "9", nullptr));
        comboBox->setItemText(9, QApplication::translate("MainWindow", "10", nullptr));
        comboBox->setItemText(10, QApplication::translate("MainWindow", "11", nullptr));
        comboBox->setItemText(11, QApplication::translate("MainWindow", "12", nullptr));
        comboBox->setItemText(12, QApplication::translate("MainWindow", "13", nullptr));
        comboBox->setItemText(13, QApplication::translate("MainWindow", "14", nullptr));
        comboBox->setItemText(14, QApplication::translate("MainWindow", "15", nullptr));
        comboBox->setItemText(15, QApplication::translate("MainWindow", "16", nullptr));
        comboBox->setItemText(16, QApplication::translate("MainWindow", "17", nullptr));
        comboBox->setItemText(17, QApplication::translate("MainWindow", "18", nullptr));
        comboBox->setItemText(18, QApplication::translate("MainWindow", "19", nullptr));
        comboBox->setItemText(19, QApplication::translate("MainWindow", "20", nullptr));
        comboBox->setItemText(20, QApplication::translate("MainWindow", "21", nullptr));
        comboBox->setItemText(21, QApplication::translate("MainWindow", "22", nullptr));
        comboBox->setItemText(22, QApplication::translate("MainWindow", "23", nullptr));
        comboBox->setItemText(23, QApplication::translate("MainWindow", "24", nullptr));
        comboBox->setItemText(24, QApplication::translate("MainWindow", "25", nullptr));
        comboBox->setItemText(25, QApplication::translate("MainWindow", "26", nullptr));
        comboBox->setItemText(26, QApplication::translate("MainWindow", "27", nullptr));
        comboBox->setItemText(27, QApplication::translate("MainWindow", "28", nullptr));
        comboBox->setItemText(28, QApplication::translate("MainWindow", "29", nullptr));
        comboBox->setItemText(29, QApplication::translate("MainWindow", "30", nullptr));
        comboBox->setItemText(30, QApplication::translate("MainWindow", "31", nullptr));

        label->setText(QApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214:", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("MainWindow", "2020", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("MainWindow", "2021", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("MainWindow", "2022", nullptr));
        comboBox_3->setItemText(3, QApplication::translate("MainWindow", "2023", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\274\320\265\321\202\320\272\320\260:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\234\320\265\321\201\321\217\321\206:", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214 \320\262\321\201\321\221", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\321\221", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        menuInfo->setTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        menuCreator->setTitle(QApplication::translate("MainWindow", "\320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
