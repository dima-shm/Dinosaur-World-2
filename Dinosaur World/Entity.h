#pragma once
class Entity
{
protected:
	std::vector<Object> obj; /* ������ �������� ����� */
	float x, y, w, h, 
		dx, dy, health, 
		speed, currentFrame;
	bool life, onGround;

	Image image;
	Texture texture;
	Sprite sprite;

public:
	Entity(String File, float X, float Y, float W, float H);
	float getX();
	float getY();
	Sprite getSprite();
	bool getLife();
	void setLife(bool Life);
	float getHealth();
	void setHealth(float Health);
	FloatRect getRect(); /* ������� ��������� ��������������: ��� ��������� � �������� */
	virtual void update(float) = 0;
};

Entity::Entity(String File, float X, float Y, float W, float H)
{
	dx = 0; dy = 0; speed = 0; health = 100; life = true, currentFrame = 0; /* ������������� ���������� */
	x = X; y = Y; /* ���������� ��������� ������� */
	w = W; h = H; /* ������ � ������ */

	image.loadFromFile("Data/Images/" + File);
	texture.loadFromImage(image);
	sprite.setTexture(texture);
}

float Entity::getX()
{
	return x;
}

float Entity::getY()
{
	return y;
}

Sprite Entity::getSprite()
{
	return sprite;
}

bool Entity::getLife()
{
	return life;
}

void Entity::setLife(bool Life)
{
	life = Life;
}

float Entity::getHealth()
{
	return health;
}

void Entity::setHealth(float Health)
{
	health = Health;
}

FloatRect Entity::getRect() /* ������� ��������� ��������������: ��� ��������� � �������� */
{
	return FloatRect(x, y, w, h); // ��� ������� ����� ��� �������� ������������ 
}