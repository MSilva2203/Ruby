#pragma once

#ifdef RB_PLATFORM_WINDOWS

extern Ruby::Application* Ruby::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Ruby::CreateApplication();
	app->Run();
	delete app;
}

#endif