#pragma once

class BasePlayer
{

protected:
	//Creem les tres variables que necessitem de tipus float.
	float vida;
	float constructor;
	float destructor;

public:
	
	BasePlayer();
	BasePlayer(float custom_life);
	~BasePlayer();
	virtual void ApplyDamage(float damage);//Creem un Mètode virtual anomenat TakeDamage.
	float getLife();
};



