#pragma once

#include "Core.h"

namespace Cactus {

	class CT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();

}

