#include "main.h"

#ifndef FLYOBJ_H
#define FLYOBJ_H

class Flyobj {
public:
    Flyobj() {}
    Flyobj(float x, float y, color_t color);
    glm::vec3 position;
    float rotation;
    bool alive;
    void draw(glm::mat4 VP);
    void set_position(float x, float y);
    void lefttick();
    void righttick();
    void slowtick();    
    bounding_box_t getboundingbox();
    double speed;
private:
    VAO *object1;
    VAO *object2;
};

#endif // FLYOBJ_H
