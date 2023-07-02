#pragma once

#include "Core.h"
#include "Cactus/Events/ApplicationEvent.h"

#include "Window.h"

namespace Cactus
{

	class CACTUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// To be defined in Client
	Application* CreateApplication();

}

