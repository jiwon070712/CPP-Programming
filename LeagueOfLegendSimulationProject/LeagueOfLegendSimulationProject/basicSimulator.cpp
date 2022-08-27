#include <iostream>
#include <string>

using namespace std;


class Champion
{
public:
    string name;
    int level;
    int ad;
    int ap;
    int hp;
    int speed;
    int attackSpeed;
    int  exp;



    Champion()
    {
        name = "";
        level = 1;
        ad = 0;
        ap = 0;
        hp = 0;
        speed = 0;
        attackSpeed = 0;
    }

    Champion(string _name, int _level, int _ad, int _ap, int _hp, int _speed, int _attackSpeed, int _exp)
    {
        name = _name;
        level = _level;
        ad = _ad;
        ap = _ap;
        hp = _hp;
        speed = _speed;
        attackSpeed = _attackSpeed;
        exp = _exp;

        attack();
    }
    void level_up()
    {
        if (level >= 18)
        {
            cout << "�̹� ������ 18�� �����߽��ϴ�.";
            return;
        }
        cout << "level up!!!\n";
        level++;
        ad = ad + 30;
        ap += 10;
        hp += 100;
        speed += 30;
        attackSpeed += 8;

        if (exp == 100)
        {
            printInfo();

        }






    }
    void printInfo()
    {
        cout << "-----------------------------------\n";
        cout << "l\t" << "[" << name << "]\n";
        cout << "l\t" << "Lv : " << level << "\n";
        cout << "l\t" << "AD : " << ad << "\n";
        cout << "l\t" << "AP : " << ap << "\n";
        cout << "l\t" << "HP : " << hp << "\n";
        cout << "l\t" << "�̵��ӵ� : " << speed << "\n";
        cout << "l\t" << "���ݼӵ� : " << attackSpeed << "\n";
        cout << "l\t" << "����ġ : " << exp << "\n";
        cout << "-----------------------------------\n-";



    }
    void attack()
    {

    }

};

class Miniun
{
public:
    string type;
    int hp;
    int exp;



    Miniun()
    {
        type = "�ٰŸ� �̴Ͼ�";
        hp = 500;
        exp = 50;
    }

    Miniun(string _type, int _hp, int _exp)
    {
        type = _type;
        hp = _hp;
        exp = _exp;
    }

    void attckedMiniun(Champion* champion)
    {
        cout << "-----------Attck!!!------------\n";
        if (hp == 0)
        {
            cout << "�̹� ���� �̴Ͼ��Դϴ�.\n";
            return;
        }

        if (this->hp <= champion->ad)  //�̴Ͼ��� ���� ��
        {
            hp = 0;
            killedMiniun(champion);
            return;
        }
        else    //ü�¸� ���� ��
        {
            this->hp -= champion->ad;
            return;
        }
    }

    /*
     * �̴Ͼ𿡰� ��Ÿ�� ģ è�Ǿ𿡰� ����ġ�� �ְ� �̴Ͼ� ��ü�� ������Ų��.
     */
    void killedMiniun(Champion* champion)
    {
        cout << "�̴Ͼ��� �׾����ϴ�.";
        champion->exp += this->exp;
    }

    void printInfo()
    {
        cout << "�̴Ͼ��� ���� ü�°� ����ġ�Դϴ�.\n";
        cout << "hp : " << this->hp << "\n";
        cout << "exp : " << this->exp << "\n";
    }



};

int main()
{
    Champion garen;
    Champion* vex = new Champion("vex", 1, 250, 50, 500, 350, 1.2, 0);
    Miniun miniun1;
    string name;
    int level, ad, ap, hp, speed, attackSpeed, exp;
    //    cout << "è�Ǿ��� �̸�, ����, ad, ap, hp, �̵��ӵ�, ���ݼӵ�, ����ġ�� ������� �Է��ϼ���. \n";
    //    cin >> name >> level >> ad >> ap >> hp >> speed >> attackSpeed >> exp;
    //
    //    garen.name = name;
    //    garen.level = level;
    //    garen.ad = ad;
    //    garen.ap = ap;
    //    garen.hp = hp;
    //    garen.speed = speed;
    //    garen.attackSpeed = attackSpeed;
    //    garen.exp = exp;
    //    garen.printInfo();

    miniun1.printInfo();
    vex->printInfo();
    miniun1.attckedMiniun(vex);
    miniun1.printInfo();
    vex->printInfo();
    miniun1.attckedMiniun(vex);
    miniun1.printInfo();
    vex->printInfo();
    miniun1.attckedMiniun(vex);
    miniun1.printInfo();
    vex->printInfo();
    miniun1.attckedMiniun(vex);
    miniun1.printInfo();
    vex->printInfo();
    miniun1.attckedMiniun(vex);
    miniun1.printInfo();
    vex->printInfo();
    miniun1.attckedMiniun(vex);
    miniun1.printInfo();
    vex->printInfo();



    vex->printInfo();
    vex->level_up();
    vex->printInfo();

}