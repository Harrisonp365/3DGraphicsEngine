#pragma once

class GraphcisEngine;

class VertexShader
{
public:
	VertexShader();
	bool release();
	~VertexShader();
private:
	bool init(void* shader_byte_code, size_t byte_code_size);
private:
	ID3D11VertexShader* m_vs;

	friend class GraphicsEngine;
};

