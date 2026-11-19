#ifndef RL_CONFIG_H
#define RL_CONFIG_H 

#define PI 3.14159265358979323846 

// Constants
namespace RLConfig {
    const float RAY_SIZE = 50.0;     // The length of the raycast sensors for the agent
    const int N_RAYS = 5;            // The number of raycast sensors used.
    const float FAN_ANGLE = PI/2.;    // The range the sensors will be distributed at.
}

#endif