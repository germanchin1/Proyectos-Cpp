#include <iostream>

using namespace std;



string gameStart(string enemyName, string heroName) {
      cout << "El enemigo " << enemyName << " ha aparecido\n";
      cout << "Como se llama el heroe?\n";
      cin >> heroName;
      cout << "El nombre del heroe es " << heroName << "\n";
	 return heroName;
}

void heroAttack(string enemyName, int heroDamage, int &enemyHP) {
      cout << "Cuanto daño quieres hacer al enemigo " << enemyName << "?\n";
      cin >> heroDamage;
      enemyHP = enemyHP - heroDamage;
}

void enemyAttack(int enemyDmg, int &heroHP) {
      int enemyDmg = 30 + rand() % 20;
      heroHP = heroHP - enemyDmg;
}



void checkEnemyStatus(int &enemyHP, string enemyName, bool ) {
      if (enemyHP <= 0) {
            cout << "Te has cargado al enemigo " << enemyName << " \n";
            enemyHP = 0;
            enemyIsAlive = false;
      }
      else {
            cout << "El enemigo " << enemyName << " tiene " << enemyHP << " puntos de vida\n";
                  enemyIsAlive = true;
      }
}

void checkHeroStatus() {
      if (heroHP <= 0) {
            cout << heroName << " has luchado honorablemente, pero has perdido la vida en la batalla.Siempre te recordaremos." << " \n";
                  heroHP = 0;
            heroIsAlive = false;
      }
      else {
            cout << heroName << " te quedan " << heroHP << " puntos de vida\n";
            heroIsAlive = true;
      }
}


int main()
{

      //Atributos del enemigo
      int enemyHP = 100;
      string enemyName = "Sauron";
      bool enemyIsAlive = true;

      //Atributos del personaje
      int heroHP = 200;
      int heroDamage;
      string heroName;
      bool heroIsAlive = true;

     heroName = gameStart(enemyName, heroName);
      while (enemyIsAlive && heroIsAlive) {

            heroAttack(enemyName, heroDamage, enemyHP);
            checkEnemyStatus();

            if (enemyIsAlive) {
                  enemyAttack();
                  checkHeroStatus();
            }
      }
}
