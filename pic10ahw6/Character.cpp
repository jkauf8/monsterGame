#include "Character.h"

Character::Character(string newName)
{
	name = newName;
	health = 20;
	damage = 2;
	arrows = 2;
}

/* Put your code below */
//class Character
//{
//    private:
//        string name;
//        int health;
//        int damage;
//        int arrows;
//};


Character::Character(string newName, int newHealth, int newDamage, int newArrows)
{
    Character::name=newName;
    Character::health=newHealth;
    Character::damage=newDamage;
    Character::arrows=newArrows;
    
    
}

void Character::set_health(int newHealth)
{
    Character::health=newHealth;
}

string Character::get_name() const
{
    return name;
}

int Character::get_health() const
{
    return health;
}
void Character:: display() const
{
    cout<<"health: " << health << " arrows: "<< arrows<<endl;
}

void Character::attack(Character& target)
{
    cout<<name<<" attacks "<< target.name<<" doing "<< damage << " damage!"<<endl;
    target.health= target.health - damage;
    cout<<target.name << " health: "<< target.health<<endl;
    
}

void Character::rangedAttack(Character& target)
{
    if(arrows>0){
        int a= 1+rand()%5;
        cout<<name<<" shoots "<< target.name <<" doing "<<a<<" damage!"<<endl;
        target.health=target.health-a;
        cout<<target.name << "health: " <<target.health<<endl;
        arrows--;
        
    }
    else if(arrows=0){
        cout<<name<< " is out of arrows!"<<endl;
    }
    
}

