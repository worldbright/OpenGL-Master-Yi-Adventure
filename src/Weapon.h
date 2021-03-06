#pragma once
#ifndef __WEAPON__
#define __WEAPON__
class Weapon {
public:
	Weapon(){}
	Weapon(const char* texture_path, vec3 pos, float rotating_dir, float rotating_speed = 8.0f, float rotating_range = PI/4.0f, int is_hand = 0) {
		stick = Box(texture_path, 6.0f, 0.5f, 0.5f, 0.25f, pos, rotating_dir, PI / 4.0f, rotating_speed, vec3(0.5f, 0, -0.75f), rotating_range);
		power = 1;
	}
	Box stick;
	int power;
	void update(float t, vec3 pos, float speed_theta) {
		stick.update(t, pos, speed_theta);
	}

	void render(GLuint program, int mode) {
		stick.render(program, mode);
	}
};
#endif