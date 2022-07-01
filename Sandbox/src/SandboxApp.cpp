#include <Ruby.h>

class Sandbox : public Ruby::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Ruby::Application* Ruby::CreateApplication()
{
	return new Sandbox();
}