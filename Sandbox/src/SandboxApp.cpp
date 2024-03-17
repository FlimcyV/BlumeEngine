#include <Blume.h>

class Sandbox : public Blume::Application 
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Blume::Application* Blume::CreateApplication() 
{
	return new Sandbox();
}