

#include "LocomotiveAgent.h"
#include <rcsc/action/body_go_to_point2010.h>
#include <rcsc/action/body_intercept.h>
#include <rcsc/action/body_kick_one_step.h>
#include <rcsc/common/server_param.h>
#include <rcsc/action/neck_turn_to_ball.h>

LocomotiveAgent::LocomotiveAgent() {
	// TODO Auto-generated constructor stub
}

LocomotiveAgent::~LocomotiveAgent() {
	// TODO Auto-generated destructor stub
}

void LocomotiveAgent::execute(PlayerAgent* agent) {

    this->agent = agent;

    if (agent->world().self().isKickable()) {
        doKick();
	}else{
        doDash();
	}
}

void LocomotiveAgent::doKick() {

    Vector2D goal = ServerParam::i().theirTeamGoalPos();
	float speed = ServerParam::i().ballSpeedMax();
    Body_KickOneStep(goal,speed).execute(agent);

}


void LocomotiveAgent::doDash () {
    Body_Intercept().execute(agent);

    //Body_GoToPoint2010(agent->world().ball().pos(),1.0,100).execute(agent);

}
