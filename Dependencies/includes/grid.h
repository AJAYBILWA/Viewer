#ifndef GRID_H
#define GRID_H

#include<vector>

class Grid
{
public:
	float* vertices;
	int verticesSize;

	Grid()
	{

	}
	Grid(unsigned int lines, float lineSpacing);
	~Grid()
	{

	}
};

Grid::Grid(unsigned int noOfLines, float lineSpacing)
{
	if (noOfLines < 2) {
		std::cout << "Provide grid lines count greater then 2\n";
		return;
	}

	std::vector <float> vertex;
	float halfDistance;

	if (noOfLines % 2 == 0) {
		halfDistance = ((int)(noOfLines / 2) - 1) * lineSpacing + lineSpacing * 0.5;
	}
	else {
		halfDistance = ((int)(noOfLines / 2)) * lineSpacing;
	}

	int linesDrawn = 0;

	for (float i = -halfDistance; i <= halfDistance; )
	{
		vertex.push_back(i);
		vertex.push_back(0.0f);
		vertex.push_back(halfDistance);

		vertex.push_back(i);
		vertex.push_back(0.0f);
		vertex.push_back(-halfDistance);

		vertex.push_back(-halfDistance);
		vertex.push_back(0.0f);
		vertex.push_back(i);

		vertex.push_back(halfDistance);
		vertex.push_back(0.0f);
		vertex.push_back(i);

		i += lineSpacing;

		linesDrawn += 2;
	}

	verticesSize = vertex.size();

	this->vertices = new float[verticesSize];

	for (int i = 0; i < verticesSize; i++)
	{
		this->vertices[i] = vertex[i];
	}
}

#endif // !GRID_H
