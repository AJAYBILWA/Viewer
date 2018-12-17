#version 330 core
out vec4 FragColor;

in vec2 TexCoord;

void main()
{
	// linearly interpolate between both textures (80% container, 20% awesomeface)
	FragColor = vec4(1.0f, 0.8f, 0.5f, 1.0f);
}