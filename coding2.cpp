#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int attack;

public:
    Player(string playerName, int playerHealth = 100, int playerAttack = 10) : name(playerName), health(playerHealth), attack(playerAttack) {}

    bool isAlive() {
        return health > 0;
    }

    void takeDamage(int damage) {
        health -= damage;
    }

    void attackEnemy(class Enemy& enemy);
};

class Enemy {
private:
    string name;
    int health;
    int attack;

public:
    Enemy(string enemyName, int enemyHealth = 50, int enemyAttack = 8) : name(enemyName), health(enemyHealth), attack(enemyAttack) {}

    bool isAlive() {
        return health > 0;
    }

    void takeDamage(int damage) {
        health -= damage;
    }

    void attackPlayer(class Player& player);
};

void Player::attackEnemy(Enemy& enemy) {
    enemy.takeDamage(attack);
}

void Enemy::attackPlayer(Player& player) {
    player.takeDamage(attack);
}

class Item {
private:
    string name;

public:
    Item(string itemName) : name(itemName) {}
};

class GameLevel {
private:
    int levelNumber;
    string description;
    vector<Enemy> enemies;

public:
    GameLevel(int levelNum, string levelDescription) : levelNumber(levelNum), description(levelDescription) {}

    void addEnemy(Enemy& enemy) {
        enemies.push_back(enemy);
    }

    void showLevelDescription() {
        cout << "Level " << levelNumber << ": " << description << endl;
    }

    void showEnemies() {
        cout << "Enemies in this level:" << endl;
        for (const auto& enemy : enemies) {
            cout << "- " << enemy.name << endl;
        }
    }
};

int main() {
    // Create a player
    Player player("Hero");

    // Create enemies
    Enemy enemy1("Goblin");
    Enemy enemy2("Dragon");

    // Create items
    Item item1("Potion");
    Item item2("Sword");

    // Create game levels
    GameLevel level1(1, "A dark forest");
    level1.addEnemy(enemy1);
    level1.showLevelDescription();
    level1.showEnemies();

    // Player encounters an enemy
    cout << "\nA wild Goblin appears!" << endl;
    player.attackEnemy(enemy1);
    enemy1.attackPlayer(player);

    // Check player's health
    if (player.isAlive()) {
        cout << "\n" << player.name << " defeated the Goblin!" << endl;
    } else {
        cout << "\n" << player.name << " was defeated by the Goblin!" << endl;
    }

    return 0;
}



    return 0;
}