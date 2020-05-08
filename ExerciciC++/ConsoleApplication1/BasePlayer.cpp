#include "pch.h"
#include "BasePlayer.h"

//Mètode que li assigna una vida al BasePlayer.
BasePlayer::BasePlayer() {
	vida = 300.0f;
}

//Fem que la vida es guardi a la variable custom_life.
BasePlayer::BasePlayer(float custom_life) {
	vida = custom_life;
}

BasePlayer::~BasePlayer() {
}

//Mètode que resta la vida i es guarda en  la variable damage.
void BasePlayer::ApplyDamage(float damage) {
	vida -= damage;
}

//Retornem la vida del BasePlayer.
float BasePlayer::getLife() {
	return vida;
}

