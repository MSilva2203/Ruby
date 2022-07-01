#pragma once

#include "Core.h"

namespace Ruby {

	class RUBY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}