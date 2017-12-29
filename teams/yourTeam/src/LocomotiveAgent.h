

#ifndef LOCOMOTIVESRC_SRC_LOCOMOTIVEAGENT_H_
#define LOCOMOTIVESRC_SRC_LOCOMOTIVEAGENT_H_

#include <rcsc/player/player_agent.h>
#include <iostream>


using namespace rcsc;

class LocomotiveAgent {

    PlayerAgent *agent;
	void doKick();
	void doDash();

public:

    LocomotiveAgent();
	virtual ~LocomotiveAgent();
    void execute(PlayerAgent*);
};

#endif /* LOCOMOTIVESRC_SRC_LOCOMOTIVEAGENT_H_ */
