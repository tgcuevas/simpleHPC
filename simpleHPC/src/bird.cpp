#include "bird.h"

Bird::Bird(repast::AgentId _id, float _heading, float _speed) {
	id = _id;
	Bird::setHeading(_heading);
	Bird::setSpeed(_speed);
	Bird::setFastest(true);
}

Bird::~Bird() {
}

float Bird::getHeading() {
	return heading;
}

void Bird::setHeading(float _heading) {
	heading = _heading;
}

float Bird::getSpeed() {
	return speed;
}

void Bird::setSpeed(float _speed) {
	speed = _speed;
}

bool Bird::getFastest() {
	return fastest;
}

void Bird::setFastest(bool _fastest) {
	fastest = _fastest;
}

void Bird::fly(int time) {
	heading = heading + (((float) time) * speed);
}
