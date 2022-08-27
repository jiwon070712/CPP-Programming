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
            cout << "이미 레벨이 18을 도달했습니다.";
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
        cout << "l\t" << "이동속도 : " << speed << "\n";
        cout << "l\t" << "공격속도 : " << attackSpeed << "\n";
        cout << "l\t" << "경험치 : " << exp << "\n";
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
        type = "근거리 미니언";
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
            cout << "이미 죽은 미니언입니다.\n";
            return;
        }

        if (this->hp <= champion->ad)  //미니언이 죽을 때
        {
            hp = 0;
            killedMiniun(champion);
            return;
        }
        else    //체력만 깎일 때
        {
            this->hp -= champion->ad;
            return;
        }
    }

    /*
     * 미니언에게 막타를 친 챔피언에게 경험치를 주고 미니언 객체를 삭제시킨다.
     */
    void killedMiniun(Champion* champion)
    {
        cout << "미니언이 죽었습니다.";
        champion->exp += this->exp;
    }

    void printInfo()
    {
        cout << "미니언의 남은 체력과 경험치입니다.\n";
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
    //    cout << "챔피언의 이름, 레벨, ad, ap, hp, 이동속도, 공격속도, 경험치를 순서대로 입력하세요. \n";
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