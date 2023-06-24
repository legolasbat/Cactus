#pragma once

#ifdef CT_PLATFORM_WINDOWS

extern Cactus::Application* Cactus::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Cactus::CreateApplication();
	app->Run();
	delete app;
}

#endif
