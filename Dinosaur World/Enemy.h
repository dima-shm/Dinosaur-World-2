//#pragma once
//class Enemy
//	: public Entity
//{
//private:
//	float moveTimer;
//public:
//	Enemy(String F, float X, float Y, float W, float H, Level &lvl) : Entity(F, X, Y, W, H)//����������� � �����������(�����������) ��� ������ Player. ��� �������� ������� ������ �� ����� �������� ��� �����, ���������� � � �, ������ � ������
//	{
//		moveTimer = 0;
//		dx = -0.06;//���� ��������.���� ������ ������ ���������
//		obj = lvl.GetObjects("solidForEnemy");//��������������.�������� ������ ������� ��� �������������� ����� � ������
//	}
//
//	void update(float time)
//	{
//		currentFrame += 0.015 * time; //������ ��� ����������� �� "������"
//		if (currentFrame > 7) currentFrame -= 7; //���������� �� ������
//		sprite.setTextureRect(IntRect(81 * int(currentFrame), 0, 81, 76));
//
//		x += dx*time;
//		checkCollision(dx, 0);//������������ ������������ �� �
//
//
//		sprite.setPosition(x, y); //������ ������� ������� � ����� ��� ������
//
//		if (health <= 0) {
//			dx = 0;
//			currentFrame += 0.00000005 * time; //������ ��� ����������� �� "������"
//			sprite.setTextureRect(IntRect(103 * int(currentFrame), 82, 103, 76));
//
//			if (currentFrame > 6)
//				life = false;
//		}
//	}
//
//	void checkCollision(float Dx, float Dy)//�-��� �������������� � ������
//	{
//		for (int i = 0; i < obj.size(); i++)//���������� �� ��������
//			if (getRect().intersects(obj[i].rect))//��������� ����������� ������ � ��������
//			{
//				if (obj[i].name == "solidForEnemy")//���� ��������� �����������
//				{
//					if (Dx > 0)	{ x = obj[i].rect.left - w;					dx = -0.06; sprite.scale(-1, 1); }
//					if (Dx < 0)	{ x = obj[i].rect.left + obj[i].rect.width; dx = 0.06;  sprite.scale(-1, 1); }
//				}
//			}
//	}
//};