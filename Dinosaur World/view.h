#include <SFML/Graphics.hpp>

using namespace sf;

View view;

void getPlayerCoordinateForView(float x, float y) /* ������� ��� ���������� ��������� ������ */
{
	float tempX = x; float tempY = y; /* ��������� ���������� ������ */

	view.setCenter(tempX, 336); /* ������ �� �������, ��������� ��� ���������� */
}