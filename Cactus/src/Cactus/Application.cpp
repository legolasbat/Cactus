#include "ctpch.h"
#include "Application.h"

#include "Cactus/Log.h"
#include "Events/ApplicationEvent.h"

namespace Cactus {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			CACTUS_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			CACTUS_TRACE(e);
		}

		while (true);
	}
	
}
