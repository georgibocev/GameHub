#include <iostream>

#include "Pistol.hpp"
#include "DesertEagle.hpp"
#include "Player.hpp"
#include "Glock.hpp"


int main() {
  try {
    Player playerOne;
    std::cin >> playerOne.vitalData.health >> playerOne.vitalData.armor;
    Player playerTwo;
    std::cin >> playerTwo.vitalData.health >> playerTwo.vitalData.armor;

    int pistolId = 0;
    int pistolDamagePerRound = 0;
    int pistolClipSize = 0;
    int pistolRemainingAmmo = 0;

    std::cin >> pistolId >> pistolDamagePerRound >> pistolClipSize >>
      pistolRemainingAmmo;

    playerOne.buyPistol(static_cast<PistolType>(pistolId), pistolDamagePerRound,
                      pistolClipSize, pistolRemainingAmmo);

    std::cin >> pistolId >> pistolDamagePerRound >> pistolClipSize >>
      pistolRemainingAmmo;
    playerTwo.buyPistol(static_cast<PistolType>(pistolId), pistolDamagePerRound,
                      pistolClipSize, pistolRemainingAmmo);

    while (true) {
      std::cout << "PlayerID " << PLAYER_ONE << " turn:" << std::endl;
      playerOne.getPistol()->fire(playerTwo);

      if (!playerTwo.isAlive()) {
        std::cout << "Player with ID: " << PLAYER_ONE << " wins!\n";
        break;
      }
    
      std::cout << "PlayerID " << PLAYER_TWO << " turn:" << std::endl;
      playerTwo.getPistol()->fire(playerOne);

      if (!playerOne.isAlive()) {
        std::cout << "Player with ID: " << PLAYER_TWO << " wins!\n";
        break;
      }
    } 
  } catch (const std::invalid_argument& e) {
      std::cerr << "Error: " << e.what() << std::endl;
      return EXIT_FAILURE;
  } catch (...) {
      std::cerr << "An unknown error occurred." << std::endl;
      return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}



