#ifndef NEWCHARACTER_H
#define NEWCHARACTER_H

#include <QDialog>

namespace Ui {
class newCharacter;
}

class newCharacter : public QDialog
{
    Q_OBJECT

public:
    explicit newCharacter(QWidget *parent = nullptr);
    ~newCharacter();
public slots:
    void button1Push();


private:
    Ui::newCharacter *ui;
};

#endif // NEWCHARACTER_H
