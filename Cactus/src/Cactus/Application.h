#pragma once

#include "Core.h"
#include "Window.h"

namespace Cactus
{

	class CACTUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// To be defined in Client
	Application* CreateApplication();

}

