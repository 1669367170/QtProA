//
// Created by 16693 on 2022/3/28.
//

#include "src/GUI/c_main_window.h"
#include "src/GUI/app_init.h"
#include <QApplication>
#include <QTextCodec>
#include <QFile>
#include <iostream>

int main(int arg, char *argv[]) {
    QApplication a(arg, argv);

#if (QT_VERSION <= QT_VERSION_CHECK(5, 0, 0))
#if _MSC_VER
    QTextCodec *codec = QTextCodec::codecForName("gbk");
#else
    QTextCodec *codec = QTextCodec::codecForName("utf-8");
#endif
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);
#else
    QTextCodec *codec = QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForLocale(codec);
#endif

    std::cout << "Main Entry" << std::endl;

    // 加载样式表
    QFile file("../qss/psblack.css");
    if (file.open(QFile::ReadOnly)) {
        QString qss = QLatin1String(file.readAll());
        QString paletteColor = qss.mid(20, 7);
        qApp->setPalette(QPalette(QColor(paletteColor)));
        qApp->setStyleSheet(qss);
        file.close();
    }

    a.setFont(QFont("Microsoft Yahei", 9));
    AppInit::Instance()->start();

    CMainWindow w;
    w.show();

    return a.exec();
}
