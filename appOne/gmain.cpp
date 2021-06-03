#include"libOne.h"
int createStar() {
	const int num = 10;
	struct SHAPE_VERTEX vertices[num];
	float deg = 360.0f / num;
	angleMode(DEGREES);
	for (int i = 0; i < num; i++) {
		float radius = 0.5f + 0.5f * (i % 2);
		vertices[i].x = sin(deg * i) * radius;
		vertices[i].y = cos(deg * i) * radius;
	}
	return createShape(vertices, num);
}
int createHeart() {
	const int num = 60;
	struct SHAPE_VERTEX vertices[num];
	float deg = 360.0f / num;
	angleMode(DEGREES);
	for (int i = 0; i < num; i++) {
		float t = deg * i;
		vertices[i].x = 
		    pow(sin(t), 3);
		vertices[i].y =-(
			13 * cos(t) -
			5 * cos(2 * t) -
			2 * cos(3 * t) -
			1 * cos(4 * t))/16;
	}
	return createShape(vertices, num);
}
void gmain(){
	window(1000, 1000);
	int idx = createHeart();
	int edx = createStar();
	float deg = 0.0f;
	angleMode(DEGREES);
	while (notQuit) {
		clear(128);

		shape(idx, 500, 500, deg, 50);
		shape(edx, 400, 400, deg, 50);

	}

}